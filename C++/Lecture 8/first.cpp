#include<iostream>
using namespace std;
class parent{
	public:
	void sum(int a,int b){
		cout<<"This is your addtion "<<a+b<<"\n";
	}
	void sum(double c,double d){
		cout<<"\nThis is your addtion of double "<<c+d;
	}
};

int main(){
	parent obj;
	obj.parent::sum(25.5,20.2);
	obj.sum(2,2);
}

