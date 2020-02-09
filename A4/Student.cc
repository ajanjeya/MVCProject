#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Student.h"

Student::Student(int i) : id(i)
{

}

Student::~Student()
{

}

Student& Student::operator+=(Course* c)
{
  llist += c;

  return *this;
}

float Student::computeGPA()
{
  return llist.computeGPA();
}

int Student::computeNumFW()
{
  return llist.computeNumFW();
}

void Student::print()
{
  float gpa = computeGPA();

  cout<< endl << "Id: " << id << "   " << "GPA: " << fixed << setprecision(1) << gpa << endl;
  llist.print();
}
