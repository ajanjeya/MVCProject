#ifndef FWMONITOR_H
#define FWMONITOR_H

#include "Monitor.h"

//Purpose:  To maintain logs related to students who have failed or withdraw from
//            more courses than the threshold.
//Operations:
//          -update: updates the logs to add the student if they fall above the threshold

class FWMonitor : public Monitor
{
  public:
    FWMonitor(int=0);
    virtual ~FWMonitor();
    virtual void update(Student*);

  protected:
    int maxFW; //number of failed or withdrawn courses threshold.

};

#endif
