#ifndef STORAGE_H
#define STORAGE_H

#include "defs.h"
#include "Student.h"

//Purpose:  stores all the students data (courses they have taken) using an
//          array of Student pointers.
//Operations:
//          -operator+=: adds the new Student into the students array
//          -print: displays the contents of each Student in the students array

class Storage
{
  public:
    Storage(int = 0);
    ~Storage();
    void print();

    Storage& operator+=(Student*);

  private:
    Student* students[MAX_NUM_STU]; //array of Student pointers
    int numStu; //number of students currently in the array
};

#endif
