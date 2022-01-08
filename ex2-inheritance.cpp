//Define a student class (with necessary constructors and member functions) in Object Oriented
//Programming (abstract necessary attributes and their types). Write a complete code in C++
//programming language.
//i. Derive a Computer Science and Mathematics class from student class adding necessary
//attributes (at least three subjects).
//ii. Use these classes in a main function and display the average marks of computer science and
//mathematics students.

#include<iostream>
using namespace std;
class student
{
protected:
float english, sum, avg;

public:
void getstudentdata()
{
cout<<"Enter english marks:";
cin>>english;
}
};
class computer : public student
{
float IT, cprog, networks;
public:
void getcomputerdata()
{
cout<<"Enter marks in IT:";
cin>>IT;
cout<<"Enter marks in cprog:";
cin>>cprog;
cout<<"Enter marks in networks:";
cin>>networks;
}
void average()
{ sum=english+IT+cprog+networks;
avg=sum/4;
cout<<"Average marks is"<<avg;
}
};
class mathematics :public student

{
float calculus, stat, algebra;
public:
void getmathdata()
{
cout<<"Enter marks in calculus:";
cin>>calculus;
cout<<"Enter marks in statistics:";
cin>>stat;
cout<<"Enter marks in Linear Algebra:";
cin>>algebra;
}
void average()
{ sum=english+calculus+stat+algebra;
avg=sum/4;
cout<<"Average marks is"<<avg;
}
};

int main()
{
computer C;
mathematics M;
cout<<"Enter marks of computer students:";
C.getstudentdata();
C.getcomputerdata();
cout<<"Enter marks of mathematics student:";
M.getstudentdata();
M.getmathdata();
C.average();
M.average();
}
