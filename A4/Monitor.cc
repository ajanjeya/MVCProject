#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

#include "Monitor.h"

Monitor::Monitor() { }

Monitor::~Monitor() { }

void Monitor::printLogs()
{
  cout << endl;

  cout << "LOGS: " << endl;
  for (int i = 0; i < logs.size(); ++i)
    cout << logs[i];

}
