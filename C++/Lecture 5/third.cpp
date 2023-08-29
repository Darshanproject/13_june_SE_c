#include<iostream>
using namespace std;
class Cars{
	public:
	void display(){
		cout<<"This is cars class \n";
	}
};
class dep{
	public:
		void display1(){
			cout<<"This is dep class \n";
		}
};
class com:public dep ,public Cars{
};
int main(){
	
	com obj;
	obj.display1();
	obj.display();
	return 0;
}
