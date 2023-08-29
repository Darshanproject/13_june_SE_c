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
int main(){
	father obj;
	obj.display1();
	obj.display();
	
	return 0;
}
