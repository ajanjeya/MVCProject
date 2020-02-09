#include <iostream>
#include <iomanip>
using namespace std;

#include "View.h"

View::View()
{

}

View::~View()
{

}

void View::mainMenu(int& selection)
{
  int numOptions = 1;
  selection      = -1;

  cout << endl;
  cout << "(1) Add student" << endl;
  cout << "(0) Exit" << endl;

  while (selection < 0 || selection > numOptions) {
    cout << "Enter your selection: ";
    cin  >> selection;
  }


}

void View::readID(int& id)
{
  cout << "student id:   ";
  cin  >> id;
}

void View::readCourse(int& courseCode, int& grade, int& term, string& instName)
{
  grade = -2;

  cout << "course code <0 to end>:  ";
  cin  >> courseCode;
  if (courseCode != 0) {

    while (grade < -1 || grade > 12) {
      cout << "grade (between -1 & 12):                   ";
      cin  >> grade;
    }

    cout << "term (in YYYYTT format): ";
    cin  >> term;
    //getchar();
    cout << "instructor's name:       ";
    cin.ignore();
    getline(cin, instName);
  }

}

void View::printStorage(Storage& stor)
{
  stor.print();
}
