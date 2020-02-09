#ifndef STUDENT_H
#define STUDENT_H

#include "Course.h"
#include "CourseList.h"

//Purpose:  To store each Students' course in a linked list of courses
//Operations:
//          -operator+=: adds the course to the linked list, in ascending order
//              of course code.
//          -print: displays the contents of each course in the linked list
//              pertaining to the student
//           -computeGPA: computes the GPA of the courses in the linked list and
//               returns a float that is the GPA.
//           -computeNumFW: computes the number of courses that have been
//               withdrawn or failed and returns the result as an int.
//           -idGetter: returns the student id.

class Student
{
  public:
    Student(int=0);
    ~Student();
    void print();
    float computeGPA();
    int computeNumFW();
    int idGetter() { return id; }

    Student& operator+=(Course*);

  private:
    int     id; //student id
    CourseList llist; //singly-linked list of courses

};

#endif
