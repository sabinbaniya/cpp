#include <iostream> //header file                                         
using namespace std;                                                              
class A  //This is class name                                                     	
{                                                                                                          
	int a, b;  //private data member                                    
	public:                                                                            
	void input()                                                                   
	{                                                                                      
		cout<<“Enter value:”;                                    	
		cin>>a;
		
		cout<<“Enter value:”;                                    	
		cin>>b; //Inputs value for a & b                           
	}                                                                                          
	friend void add(A ob); //friend function which                        
 passes name of class and object                                           	
};

void add (A ob) //A = class name
{
	int c;
	c = ob.a + ob.b;
	cout<<"sum="<<c;
};

int main(){
	a kk;
	kk.input();
	add(kk);
	return 0;
	
	
};
