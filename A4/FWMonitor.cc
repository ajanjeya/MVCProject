#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

#include "FWMonitor.h"

FWMonitor::FWMonitor(int t) : maxFW(t) { }

FWMonitor::~FWMonitor() { }

void FWMonitor::update(Student* stu)
{
  string logString;
  int stuFW = stu->computeNumFW();

  if (stuFW > maxFW) {
    ostringstream logString;

    logString << "Id: " << stu->idGetter() << "   " << "Num FW: " << stuFW << endl;
    logs.push_back(logString.str());
  }
}
