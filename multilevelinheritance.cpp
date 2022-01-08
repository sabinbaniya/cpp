//A class Student consists of field roll, a method to assigns roll number. A new class Test is derived
//from class Student and consists of two new fields sub1 and sub2, a method to initialize these
//fields with obtained mark. Again, a new class Result is derived from Test and consists of a field
//total and a method to display entire details along with total obtained marks. WAP to input roll
//number, marks in two different subject and display total.

#include<iostream>
using namespace std;
class Student
{
protected:
int roll;
public:
void setroll(int r)
{
roll=r;
}
};

class Test: public Student
{
protected:
float sub1, sub2;
public:
void setmark(float m1, float m2)
{
sub1=m1;
sub2=m2;
}
};
class Result : public Test
{
private:
float total;
public:
void display()
{
total=sub1+sub2;
cout<<"Roll number= "<<roll;
cout<<"Mark in first subject= "<<sub1;
cout<<"Mark in second subject= "<<sub2;
cout<<"Total= "<<total;
}
};

int main()
{
int r;
float s1,s2;
cout<<"Enter roll number";
cin>>r;
cout<<"Enter marks in two subject";
cin>>s1>>s2;
Result res;
res.setroll(r);
res.setmark(s1,s2);
res.display();
}
