#include<iostream>
using namespace std;
class person{
	public:
		void add(int a,int b){
			cout<<"This is your addtion of int"<<a+b<<"\n";
		}
};

class maths:public person{
	public:
		void add(double a,double b){
			cout<<"This is your addtion of double"<<a+b<<"\n";
		}
};
int main(){
	int a,b;
	double c,d;
	cout<<"Enter the values of int ";
	cin>>a;
	cout<<"Enter the values of int ";
	cin>>b;
	cout<<"Enter the values of double";
	cin>>c;
	cout<<"Enter the values of double ";
	cin>>d;
	maths obj;
	obj.add(c,d);
	obj.add(a,b);
}
