//Define a Clock class (with necessary constructor and member functions) in OOP (abstract
//necessary attributes and their types). Write a complete code in C++ programming language.
//i. Derive Wall_Clock class from Clock class adding necessary attributes.
//ii. Create two objects of Wall_Clock class with all initial state to empty.

#include <iostream>
#include <string.h>
using namespace std;
class clock
{
protected:
char model_no[10];
float price;
char manufacturer[50];
public:
void getclockdata()
{
cout<<"Enter clock manufacturer:"<<endl;
cin>>manufacturer;
cout<<"Enter model number:"<<endl;
cin>>model_no;
cout<<"Enter price:"<<endl;
cin>>price;
}
void clockdisplay()
{
cout<<"Model number="<<model_no<<endl;
cout<<"Manufacturer="<<manufacturer<<endl;
cout<<"Price="<<price<<endl;
}
};
class wall_clock: public clock
{
int hr, min, sec;
public:
wall_clock()
{
strcpy(model_no,"");
strcpy(manufacturer,"");
price=0.0;
hr=0;
min=0;
sec=0;
}
void getwallclockdata()
{
cout<<"Enter hour, minute and seconds:"<<endl;
cin>>hr>>min>>sec;
}

void wallclockdisplay()
{
cout<<"Time="<<hr<<":"<<min<<":"<<sec<<endl;
}
};
int main()
{
wall_clock W1, W2;
cout<<"Enter data for W1:"<<endl;
W1.getclockdata();
W1.getwallclockdata();
cout<<"Value of W1:"<<endl;
W1.clockdisplay();
W1.wallclockdisplay();
cout<<"Enter data for W2:"<<endl;
W2.getclockdata();
W2.getwallclockdata();
cout<<"Value of W2:"<<endl;
W2.clockdisplay();
W2.wallclockdisplay();
}
