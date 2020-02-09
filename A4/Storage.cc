#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Storage.h"

Storage::Storage(int n)
{
  numStu = n;
}

Storage::~Storage()
{
  for (int i = 0; i < numStu; i++) {
    delete students[i];
  }
}

Storage& Storage::operator+=(Student* stu)
{
  if ((numStu+1) < MAX_NUM_STU) {
    students[numStu] = stu;
    numStu++;
    return *this;
  }

  cout << "Max students limit reached." << endl;
  return *this;
}

void Storage::print()
{
  cout << endl << endl << "STUDENT INFO: " << endl;

  for (int i = 0; i < numStu; i++) {
    students[i]->print();
  }

  cout << endl;
}
