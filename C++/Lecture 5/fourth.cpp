#include<iostream>
using namespace std;
class Cars{
	public:
	void display(){
		cout<<"This is cars class \n";
	}
};
class dep :public Cars{
	public:
		void display1(){
			cout<<"This is dep class \n";
		}
};
class com:public Cars{
	public:
		void abx(){
			cout<<"\nThis is com class \n";
		}
};

class sec:public Cars{
	public:
		void htj(){
			cout<<"\nThis is sec Class";
		}
};
int main(){
	
	dep obj1;
	obj1.display();
	obj1.display1();
	sec obj2;
	obj2.display();
	obj2.htj();
	com obj;
	obj.abx();
	obj.display();
	return 0;
}
