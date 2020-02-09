#ifndef CONTROL_H
#define CONTROL_H

#include <string>
#include <vector>
#include "Storage.h"
#include "View.h"
#include "Monitor.h"
#include "StuServer.h"

using namespace std;

//Purpose: To facilitate the control flow of the program using a single class.
//Operations:
//          -launch: To essentially start the program; user selection, adding
//              students and their respective courses taken.
//          -notify:  alerts the Monitor objects of a new student being entered

class Control
{
  public:
    Control();
    ~Control();
    void launch();
    void notify(Student*);

  private:
    Storage   s; //Storage object where the Student data is stored.
    View      v; //View object where the user I/O is handled.
    vector<Monitor*> monitors; //a vector of Monitor objects to monitor students' academic info
    StuServer server;  //the mock student server where a number of students are stored. 
};

#endif
