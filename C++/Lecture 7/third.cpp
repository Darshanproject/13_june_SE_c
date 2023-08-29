#include<iostream>
using namespace std;
class person{
	public:
		void add(){
			int g,e;
		
	cout<<"Enter the values of int ";
	cin>>g;
	cout<<"Enter the values of int ";
	cin>>e;
	cout<<"This is your addtion of int"<<g+e<<"\n";
		}
};

class maths:public person{
	public:
		
		void add(double a,double b){
		person::add();		
			cout<<"This is your addtion of double"<<a+b<<"\n";
		
		}
};
int main(){
	int a,b;
	double c,d;

	cout<<"Enter the values of double";
	cin>>c;
	cout<<"Enter the values of double ";
	cin>>d;
	maths obj;
	obj.add(c,d);
}
