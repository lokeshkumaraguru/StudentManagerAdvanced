#ifndef _STUDENT_H_
#define _STUDENT_H_

#include <string>
#include <vector>

class student
{
  private:
    std::string firstname;
    std::string lastname;
    std::vector <double> Grades;
    int grade;
  public:
    void setName(std::string firstname, std::string lastname);
    std::string fullName();
    void addGrade(double grade);
    double getScore();
    student() {
    firstname = " ";
    lastname = " ";
    grade = 0;
    }
};
#endif
