#include <iostream>

using namespace std;

class teacher{
	static void printText1();
	void printText2();
	void printValue(int a);
	
};

int teacher :: printText1{
	cout<<"Text 1 printed."
}

int teacher :: printText2{
	cout<<"Text 2 printed."
}

int teacher :: printValue{
	cout<<"Value is printed."
}

int main(){
	teacher:: printText1;
	teacher:: printText2;
	teacher:: printValue;

return 0;

};
