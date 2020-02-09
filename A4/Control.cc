#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

#include "Control.h"
#include "GPAMonitor.h"
#include "FWMonitor.h"

Control::Control()
{

  GPAMonitor* gpaMon = new GPAMonitor(3.0);
  FWMonitor* fwMon   = new FWMonitor(2);

  monitors.push_back(gpaMon);
  monitors.push_back(fwMon);


  vector<string> stuCloud;
  server.retrieve(stuCloud);

  stringstream ss;
  int stuId, courseCode, grade, term;
  string instName;

  for (int i=0; i < stuCloud.size(); ++i) {
    ss.clear();
    ss.str(stuCloud[i]);
    ss >> stuId;
    Student* newStu = new Student(stuId);

    while (1) {
      ss >> courseCode;

      if (courseCode == 0)
        break;

      ss >> term >> grade >> instName;

      Course* newCourse = new Course(courseCode, grade, term, instName);
      (*newStu) += newCourse;
    }
    s += newStu;
    notify(newStu);
  }

}

Control::~Control()
{
  for (int i = 0; i < monitors.size(); ++i){
    monitors[i]->printLogs();
    delete monitors[i];
  }
}

void Control::notify(Student* newStu)
{
  for (int i = 0; i < monitors.size(); ++i)
    monitors[i]->update(newStu);
}

void Control::launch()
{
  int     numCourses;
  int     stuId, courseCode, grade, term;
  string  instName;
  int     menuSelection = -1;


  while (1) {
    v.mainMenu(menuSelection);

    if (menuSelection == 0)
      break;
    else if (menuSelection == 1) {
      v.readID(stuId);
      Student* newStu = new Student(stuId);

      while (1) {
        v.readCourse(courseCode, grade, term, instName);

        if (courseCode == 0)
          break;

        Course* newCourse = new Course(courseCode, grade, term, instName);
        (*newStu) += newCourse;
      }
      s += newStu;
      notify(newStu);
    }

  }

  v.printStorage(s);
}
