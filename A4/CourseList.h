#ifndef COURSELIST_H
#define COURSELIST_H

#include <string>
#include "List.h"
#include "Course.h"

using namespace std;
//Purpose: A linked list of courses derived from the List template.
//Operations:
//           -computeGPA: computes the GPA of the courses in the linked list and
//               returns a float that is the GPA.
//           -computeNumFW: computes the number of courses that have been
//               withdrawn or failed and returns the result as an int.

class CourseList : public List<Course*>
{
  public:
    CourseList();
    ~CourseList();
    float computeGPA();
    int computeNumFW();

  private:

};

#endif
