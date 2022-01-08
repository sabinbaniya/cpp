#include <iostream>

using namespace std;

class Employee{
public:
	int printFunc(){
		string emp1, emp2;
		int date1, date2;
		string add1, add2;
		
		cout<<"Enter name of employee : "<<endl;
		cin>>emp1>>emp2;
		cout<<"Enter date of joining of employee : "<<endl;
		cin>>date1>>date2;
		cout<<"Enter address of employee : "<<endl;
		cin>>add1>>add2;
		
		cout<<"Name	Year of joining	 Address\n"<<emp1<<"     "<<date1<<" 	 	 "<<add1<<"\n"<<emp2<<"     "<<date2<<"  		 "<<add2;
	};
};


int main(){
	
	Employee empData;
	empData.printFunc();
	return 0;
}
