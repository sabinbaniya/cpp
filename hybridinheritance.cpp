//Create a class Student with data member roll_no and two functions to initialize and display it.
//Derive a new class Test which has two methods to assign and display marks in two subjects.
//Create a new class Sport with two functions that assign and display the score in sports. Now
//create another class Result that is derived from both class Test and Sport, having a function that
//displays the total of marks and score. Write a main program to test your class.
//The example shows the hybrid inheritance i.e. combination of multilevel and multiple
//inheritance.

#include<iostream>
using namespace std;
class Student
{
private:
int roll;

public:
void setroll()
{
cout<<"Enter roll number";
cin>>roll;
}
void showroll()
{
cout<<"Roll= "<<roll;
}
};
class Test: public Student
{
protected:
float com,eng;
public:
void setmark()
{
cout<<"Enter marks of computer and English ";
cin>>com>>eng;
}
void showmark()
{
cout<<"Computer= "<<com;
cout<<"English= "<<eng;
}
};

class Sport
{
protected:
float score;
public:
void setscore()
{
cout<<"Enter score in sports ";
cin>>score;
}
void showscore()
{
cout<<"Score in sports= "<<score;
}
};
class Result: public Test, public Sport
{
private:
float tot;
public:
void showtotal()
{
tot=com+eng+score;
cout<<"Total obtained marks= "<<tot;
}
};

int main()
{
Result res;
res.setroll();
res.setmark();
res.setscore();
res.showroll();
res.showmark();
res.showscore();
res.showtotal();
}
