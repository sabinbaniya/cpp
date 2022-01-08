#include <iostream>

using namespace std;

class Base
{
	private:
		int printPrivate(){
			cout<<"Im inside private";
			return 0;
		}
		
	public:
		void printPublic(){
			cout<<"Im inside public";
		}
	
	protected:
		void printProtected(){
			cout<<"Im inside protected";
		}
		
};

class Derived : public Base
{
	public:
		void checkAccessibility(){
			printPrivate();
			printPublic();
			printProtected();
		}

};

int main()
{
	Derived D;
	D.checkAccessibility();
	return 0;
};
