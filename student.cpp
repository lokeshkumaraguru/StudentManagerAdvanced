#include <string>
#include <vector>
#include "student.h"

void student::setName(std::string firstName, std::string lastName)
{
        firstname = firstName;
        lastname = lastName;
}

std::string student::fullName()
{
        std::string str;
        std::string str2 = firstname;
        std::string str3 = lastname;

        str.append(str2);
        str.append(" ");
        str.append(str3);
        return str;
}

void student::addGrade(double Grade)
{
  Grades.push_back(Grade);
}

double student::getScore()
{
  for (int i = 0; i < Grades.size(); i++)
  {
    grade = Grades[i] + grade;
  }
  if(Grades.size() > 1)
  {
  grade = grade/Grades.size();
  }
  else
  {
  grade = 0;
  }
  return grade;
}
