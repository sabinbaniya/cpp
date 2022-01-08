#include <iostream>

using namespace std;

class bankAcc{
	public:
		
	string h_name;
	long double acc_no;
	string acc_type;
	double bal;
	
	int assign(){
		cout<<"Enter A/C holder's name: ";
		cin>>h_name;
		cout<<"Enter A/C number: ";
		cin>>acc_no;
		cout<<"Enter A/C type: ";
		cin>>acc_type;
		cout<<"Enter A/C total balance: ";
		cin>>bal;
	};
	
	int deposit(){
		int dep;
		cout<<"\n\nEnter the amount to be deposited: ";
		cin>>dep;
		
		bal+=dep;
		cout<<"The amount has been deposited, Your current balance is: "<<bal;
	};
	
	int withdraw(){
		int withdraw_amt;
		cout<<"\n\nEnter the amount to be withdrawn: ";
		cin>>withdraw_amt;
		
		bal-=withdraw_amt;
		cout<<"\nThe amount has been withdrawn, Your current balance is: "<<bal;

	};
	
	int display(){
		cout<<"\n\nAccount holder's name: "<<h_name;
		cout<<"\nYour current balance is: "<<bal;
	
	};
	
		
};

int main(){
	bankAcc testAcc;
	testAcc.assign();
	testAcc.deposit();
	testAcc.withdraw();
	testAcc.display();
	
};
