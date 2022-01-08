//Create two classes class1 and class2 each having data member for storing a number, a method
//to initialize it. Create a new class class3 that is derived from both class class1 and class2 and
//consisting of a method that displays the sum of two numbers from class1 and class2.

#include<iostream>
using namespace std;
class class1
{
protected:
int n;
public:

void getn(int p)
{
n=p;
}
};

class class2
{
protected:
int m;
public:
void getm(int q)
{
m=q;
}
};
class class3: public class1, public class2
{
public:
void displaytotal()
{
int tot;
tot=n+m;
cout<<"Sum ="<<tot;
}
};

int main()
{
class3 a;
a.getm(4);
a.getn(5);
a.displaytotal();
}
