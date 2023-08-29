/*
Simple 
mult
multipel
hybrid
hirechal
*/

#include<iostream>
using namespace std;
class Cars{
	public:
	void display(){
		cout<<"This is cars class \n";
	}
};
class dep:public Cars{
	public:
		void display1(){
			cout<<"This is dep class \n";
		}
};
int main(){
	
	dep obj;
	obj.display1();
	obj.display();
	
	
	return 0;
	
}
