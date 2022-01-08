#include <iostream>
#include <string>

using namespace std;

class Addition
{
	public:
		
	/*	void sum(int x)
		{
			cout<<"The value of x before overloading  is "<<x<<endl;
		} */
		
		void sum(int x)
		{
			cout<<"The value of x after overloading is "<<++x<<endl;
		}
		
		void sub(int x)
		{
			cout<<"The value of x after overloading is "<<-x<<endl;
		}
		
		
};

int main()
{
	Addition a;
	a.sum(2);
	a.sub(3);
}
