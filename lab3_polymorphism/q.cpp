#include <iostream>
#include <string>

using namespace std;

class Addition
{
	public:
		
		void sum(int x, int y)
		{
			cout<<"1. The sum is "<<x+y<<endl;
		}
		
		void sum(int x,double y)
		{
			cout<<"2. The sum is "<<x+y<<endl;
		}
		
		void sum(double x, double y)
		{
			cout<<"3. The sum is "<<x+y<<endl;
		}
		
		void sum(double x, int y)
		{
			cout<<"4. The sum is "<<x+y<<endl;
		}
};

int main()
{
	Addition a;
	a.sum(2,3.5);
	a.sum(3,5);
	a.sum(3.2,6);
	a.sum(2.2,3.3);
}
