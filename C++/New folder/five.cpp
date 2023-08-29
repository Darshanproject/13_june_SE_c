#include<iostream>
using namespace std;
class A{
	public:
		void dispaly(){
			cout<<"This is class A \n";
		}
};
class B:public A{
	public :
		void display2(){
			cout<<"This is class B";
		}
};

class C{
	public:
		void display3(){
			cout<<"This is class C";
		}
};
class D:public B,public C{
	public:
		void display4(){
			cout<<"This is D class \n";
		}
};
int main(){
	D obj;
	obj.dispaly();
	obj.display2();
	obj.display3();
	obj.display4();
	cout<<"\n-------------------------------------------------\n";
	C obj1;

	obj1.display3();
}
