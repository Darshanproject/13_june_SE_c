#include<iostream>
using namespace std;
class a{
	public:
	void display()
	{
		cout<<"This is gardnfaters class";
	}
};

class b:public a{
	public:
	void display2(){
		cout<<"\nThis is fathers class";
	}
};

class c:public b{
	public:
		void son(){
			cout<<"\nThis is sons class";
		}
};


main()
{
	c obj;
	obj.display();
	obj.display2();
	obj.son();
}
