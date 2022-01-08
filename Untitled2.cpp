#include<iostream>
using namespace std;
class Random{
private:
int a;
public:
Random(int num){
a=num;
}
void getNum(){
cout<<"Your input is "<<a<<endl;
}
};
int main(){
Random r1(7);
r1.getNum();
return 0;
}

