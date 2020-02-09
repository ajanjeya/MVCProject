#ifndef COURSE_H
#define COURSE_H

//Purpose: To initialise a course with its corressponding data members.
//Operations:
//          -print: displays the contents of the course, such as the course code,
//              grade received, term it was taken, and the instructor's name.
//          -lessThan: compares the course code values between two courses and
//              returns the truth value if it is less than the
//              operations' argument Course value.

class Course
{
  public:
    Course(int=0, int=0, int=0, string="N/A");
    void print();
    bool lessThan(Course*);
    int gradeGetter() { return grade; }

  private:
    int code;    // course code, for example 2404 for COMP2404
    int grade;   // numeric grade from 0 (F) to 12 (A+), with -1 for WDN
    int term;    // term when course was taken, in format YYYYTT
    string instructor;  // name of the course instructor
    void getGradeStr(string&); //setting the aplhabetic grade value
};

#endif
