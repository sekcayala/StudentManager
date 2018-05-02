#include "student.h"

void student::setName(string f, string l)
{
first=f;
last=l;
}

string student::fullName()
{
return first + " " + last;
}
