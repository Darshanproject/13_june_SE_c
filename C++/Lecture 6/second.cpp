#include<iostream>
using namespace std;
class A{
	public:
		void Display(){
			cout<<"This is class a "<<"\n";
		}
};
class B:public A{
	public:
		void Display1(){
			cout<<"This is class B "<<"\n";
		}
};
class C{
	public:
		void Display2(){
			cout<<"This is class C "<<"\n";
		}
};
class D:public C,public B{
	public:
		void Display3(){
			cout<<"This is class D "<<"\n";
		}
};

int main()
{
	B obj;
	obj.Display();
	obj.Display1();
	cout<<"----------------------------------------------"<<endl;
	C obj1;
	obj1.Display2();
	cout<<"----------------------------------------------"<<endl;
	D obj2;
	obj2.Display();
	obj2.Display1();
	obj2.Display2();
	obj2.Display3();
	return 0;	
}
