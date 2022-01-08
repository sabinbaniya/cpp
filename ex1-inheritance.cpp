//Define a shape class (with necessary constructors and member functions) in Object Oriented
//Programming (abstract necessary attributes and their types). Write a complete code in C++
//programming language.
//i. Derive triangle and rectangle classes from shape class adding necessary attributes.
//ii. Use these classes in main function and display the area of triangle and rectangle.

#include<iostream>
using namespace std;
class shape
{
protected:
float breadth, height, area;
public:
void getshapedata()
{
cout<<"Enter breadth:";
cin>>breadth;

cout<<"Enter height:";
cin>>height;
}
};
class triangle: public shape
{
public:
void calarea()
{
area=(breadth * height)/2;
}
void display()
{
cout<<"The area of triangle is"<<area;
}
};
class rectangle: public shape
{
public:
void calarea()
{
area=breadth * height;
}
void display()
{
cout<<"Area of rectangle is"<<area;
}

};
int main()
{
triangle T;
rectangle R;
cout<<"Enter triangle data:";
T.getshapedata();
cout<<"Enter rectangle data:";
R.getshapedata();
T.calarea();
R.calarea();
T.display();
R.display();
}
