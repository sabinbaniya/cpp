//A company needs to keep record of its following employees:
//i) Manager ii) Supervisor
//The record requires name and salary of both employees. In addition, it also requires
//section_name (i.e. name of section, example Accounts, Marketing, etc.) for the Manager and
//group_id (Group identification number, e.g. 205, 112, etc.) for the Supervisor. Design classes for
//the above requirement. Each of the classes should have a function called set() to assign data to
//the fields and a function called get() to return the value of the fields. Write a main program to
//test your classes.

#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
private:
char name[30];
float salary;
public:
void setName(char *n)
{
strcpy(name,n);
}
void setSalary(float s)
{
salary=s;
}
char *getName()
{
return name;
}
float getSalary()
{
return salary;
}
};
class Manager: public Employee
{
private:
char section_name[50];
public:
void setSection_name(char *sn)
{
strcpy(section_name,sn);
}
char * getSection_name()
{

return section_name;
}
};
class Supervisor: public Employee
{
private:
int group_id;
public:
void setGroup_id(int gid)
{
group_id=gid;
}
int getGroup_id()
{
return group_id;
}
};

int main()
{
Manager m;
m.setName("Elon Musk");
m.setSalary(50000);
m.setSection_name("Accounts");
cout<<"Name= "<<m.getName();
cout<<"Salary= "<<m.getSalary();
cout<<"Section= "<<m.getSection_name();
Supervisor s;
s.setName("Bill Gates");
s.setSalary(40000);
s.setGroup_id(5);
cout<<"Name= "<<s.getName();
cout<<"Salary= "<<s.getSalary();
cout<<"Group ID= "<<s.getGroup_id();
}
