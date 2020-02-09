#include <iostream>
#include <iomanip>
using namespace std;

#include "CourseList.h"

CourseList::CourseList() {  }

CourseList::~CourseList() {  }

float CourseList::computeGPA()
{
  float gpa       = 0.0;
  int tmp         = 0;
  int courseCount = 0;
  int courseGrade;

  Node* curNode = head;

  while (curNode != NULL) {
    courseGrade = curNode->data->gradeGetter();

    if (courseGrade >= 0 && courseGrade <= 12) {
      tmp += courseGrade;
      courseCount++;
    }

    curNode = curNode->next;
  }

  if (courseCount != 0)
    gpa = float(tmp) / courseCount;

  return gpa;
}

int CourseList::computeNumFW()
{
  int numFW = 0;
  int courseGrade;

  Node* curNode = head;

  while (curNode != NULL) {
    courseGrade = curNode->data->gradeGetter();

    if (courseGrade == 0 || courseGrade == -1)
      numFW++;

    curNode = curNode->next;
  }

  return numFW;
}
