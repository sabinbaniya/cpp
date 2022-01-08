#include<iostream>

using namespace std;

class interest
{
int n;
float rate,p;
public:
void get()
{
cout<<“\nEnter principle Amount & no. of year: \n”;
cin>>p>>n;
}
void cal(float rate)
{
float si;
si=(p*n*rate)/100;
cout<<“\n\nSimple Interest is: “<<si;
}
};
void main()
{
interest i;
clrscr();
i.get();
i.cal(4.5);
getch();
}
