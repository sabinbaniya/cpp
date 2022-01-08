#include <iostream>
#include <string>

using namespace std;

class ourClass
{
	public:
		
		void func(int x, int y)
		{
			cout<<"1. This is a rectangle."<<endl;
		}
		
		void func(int x,int y,int z)
		{
			cout<<"2. This is a traingle."<<endl;
		}
		
		void func(int x)
		{
			cout<<"3. This is a square."<<endl;
		}
		
};

int main()
{
	ourClass a;
	a.func(2,3,5);
	a.func(3,5);
	a.func(3);
}

