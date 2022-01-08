#include <iostream>
#include <string>

using namespace std;

class Addition
{
	public:
		int overload(int x)
		{
			++x;
			print(x);
		}
		
		int print()
		{
			cout<<"The value of x after overloading is "<<x<<endl;
		}
};

int main()
{
	Addition a;
	a.overload(2);
}


