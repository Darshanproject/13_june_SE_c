#include<iostream>
using namespace std;
class Demo{
	public:
		void display(){
			cout<<"This is demo class "<<endl;
		}
};
class B:public Demo{
	public:
		void abc(){
			cout<<"This is B class "<<endl;
		}
};
class c:public Demo{
	public:
		void def(){
			cout<<"This is C class "<<endl;
		}
};
class D:public Demo{
	public:
		void ghi(){
			cout<<"This is D class "<<endl;
		}
};



int main(){
	B obj;
	obj.display();
	obj.abc();
	cout<<"----------------------------------------------"<<endl;
	c obj1;
	obj1.display();
	obj1.def();
	cout<<"----------------------------------------------"<<endl;
	D obj3;
	obj3.display();
	obj3.ghi();
}

