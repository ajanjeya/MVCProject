#ifndef GPAMONITOR_H
#define GPAMONITOR_H

#include "Monitor.h"

//Purpose:  To maintain logs related to students who have a GPA less than the threshold
//Operations:
//          -update: updates the logs to add the student if they fall below the threshold

class GPAMonitor : public Monitor
{
  public:
    GPAMonitor(float=0.0);
    virtual ~GPAMonitor();
    virtual void update(Student*);

  protected:
    float minGPA; //minimum GPA threshold 

};

#endif
