#include <iostream>

using namespace std;

class Parent
{
	public: 
			int id_p=9;
};

class Child : public Parent{
	public:
			int id_c=8;
};

int main()
{
	Child obj1;
	cout<<"Child is is "<<obj1.id_c;
	cout<<"\nParent id is "<<obj1.id_p;
	return 0;
	
};
