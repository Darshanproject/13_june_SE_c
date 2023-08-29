#include<iostream>
using namespace std;
class grandfather{
	public:
		void display(){
			cout<<"This is garndfathers class\n";
		}
};
class father:public grandfather{
	public:
		void display1(){
			cout<<"This is fathers class \n";
		}
};
class son :public father{
	public:
		void display2(){
			cout<<"this is son class \n";
		}
};
int main(){
	son obj;
	obj.display1();
	obj.display();
	obj.display2();
	return 0;
}
