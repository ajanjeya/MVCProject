#ifndef MONITOR_H
#define MONITOR_H

#include <vector>
#include <string>
#include "Student.h"

//Purpose:  Observers to the Control object. Monitors the status of students academic information
//Operations:
//          -update: updates the Monitor object's logs if a student is supposed to be flagged
//                by the SAS system.
//          -printLogs: prints the logs of the Monitor object of all the flagged students.

class Monitor
{
  public:
    Monitor();
    virtual ~Monitor();
    virtual void update(Student*) = 0;
    void printLogs();

  protected:
    vector<string> logs; //vector of strings which indicate the students' ID and related info.

};

#endif
