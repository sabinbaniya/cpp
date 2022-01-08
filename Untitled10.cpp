#include <iostream>

using namespace std;

class area{
	public:	
	int length, breadth, ar;
	
	int setDimension(){
		cout<<"Enter length of the rectangle: ";
		cin>>length;
		
		cout<<"Enter breadth of the rectangle: ";
		cin>>breadth;
		
	}
	
	int getArea(){
		ar = 2*(length + breadth);
		cout<<"The area of rectangle is "<<ar;
	}
	
};

int main(){
	
	area a1;
	a1.setDimension();
	a1.getArea();
	return 0;
	
}; 
