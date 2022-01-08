/*A class Room consists of two fields length and breadth and method int area() to find the area of
room. A new class BedRoom is derived from class Room and consist of additional field height and
two methods setData (int,int,int) to set the value for three fields and int volume() to find the
volume.
Now WAP to input the length, breadth and height and find the area and volume.
*/

#include<iostream>
using namespace std;
class Room
{
protected:
float length, breadth;
public:
int area()

{
return(length*breadth);
}
};
class BedRoom : public Room
{
private:
float height;
public:
void setData(int l, int b, int h)
{
length=l;
breadth=b;
height=h;
}
int volume()
{
return(length * breadth * height);
}
};

int main()
{
BedRoom b;
b.setData(3,4,5);
cout<<"Area of bedroom= "<<b.area()<<endl;
cout<<"Volume of bedroom="<<b.volume();
}
