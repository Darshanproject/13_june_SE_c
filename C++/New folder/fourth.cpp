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

class C:public A{
	public:
		void display3(){
			cout<<"This is class C";
		}
};
int main(){
	B obj;
	obj.dispaly();
	obj.display2();
	cout<<"\n-------------------------------------------------\n";
	C obj1;
	obj1.dispaly();
	obj1.display3();
}
