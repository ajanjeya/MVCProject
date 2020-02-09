#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

#include "GPAMonitor.h"

GPAMonitor::GPAMonitor(float g) : minGPA(g) { }

GPAMonitor::~GPAMonitor() { }

void GPAMonitor::update(Student* stu)
{
  string logString;
  float stuGPA = stu->computeGPA();

  if (stuGPA < minGPA) {
    ostringstream logString;
    logString << "Id: " << stu->idGetter() << "   " << "GPA: " << fixed << setprecision(2) << stuGPA << endl;

    logs.push_back(logString.str());
  }
}
