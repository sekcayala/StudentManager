#ifndef _STUDENT_H
#define _STUDENT_H
#include<string>

using namespace std;

class student
{
private: 
string first;
string last;
public:
string fullName();
void setName(string first, string last);
};

#endif
