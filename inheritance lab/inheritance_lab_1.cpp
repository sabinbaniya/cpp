#include <iostream>

using namespace std;

class Room 
{
	protected:
		float length, breadth;
	public: 
		int area(){
			return (length*breadth);
		}
};

class BedRoom : public Room
{
	private:
		float height;
		
	public: 
		void setData(int l,int b,int h)
		{
			length=l;
			breadth=b;
			height=h;
		}
		
		int volume()
		{
			return (length*breadth*height);
		}
};

int main()
{
	BedRoom b;
	int x, y, z;
	cout<<"Enter length: ";
	cin>>x;
	cout<<"Enter breadth: ";
	cin>>y;
	cout<<"Enter height: ";
	cin>>z;
	b.setData(x,y,z);	
	cout<<"Area "<<b.area()<<endl;
	cout<<"Volume of bedroom= "<<b.volume();

}


