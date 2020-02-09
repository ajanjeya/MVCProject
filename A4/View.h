#ifndef VIEW_H
#define VIEW_H

#include <string>
#include "Storage.h"

using namespace std;

//Purpose: To facilitate the user input and output process of entering student
//    data and their corressponding courses' data. It also prints all the
//    students' in the Storage class at the end
//Operations:
//          -mainMenu: displays a user interface by allowing the user to enter
//              data by entering their selection
//          -readID: reads the new student id being entered
//          -readCourse: reads the following lines of input for the details of
//              the specific course
//          -printStorage: displays the contents of the Storage class, which
//              consists of all the students in that Storage class.

class View
{
  public:
    View();
    ~View();
    void mainMenu(int&);
    void readID(int&);
    void readCourse(int&, int&, int&, string&);
    void printStorage(Storage&);

  private:

};

#endif
