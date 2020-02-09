#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Course.h"

Course::Course(int c, int g, int t, string n)
{
  code  = c;
  grade = g;
  term = t;
  instructor = n;
}

bool Course::lessThan(Course* aCourse)
{
  bool lesser = false;

  if (code < aCourse->code)
    return true;

  if (code == aCourse->code) {
    if (term < aCourse->term)
      lesser = true;
  }

  return lesser;
}

void Course::print()
{
  string str;

  cout << "-- COMP " << code << ":  ";
  cout << right << setw(2) << grade   << "  ";
  getGradeStr(str);
  cout << left << setw(3) << str << "  ";
  cout << right << setw(2) << term << "  ";
  cout << left << setw(3) << instructor << endl;

}

void Course::getGradeStr(string& gradeStr)
{
  string gradeStrings[] = {
    "WDN", "F", "D-", "D", "D+", "C-", "C", "C+",
    "B-", "B", "B+", "A-", "A", "A+" };

  if ( grade >= -1 && grade <= 12 )
    gradeStr = gradeStrings[grade+1];
  else
    gradeStr = "Unknown";
}
