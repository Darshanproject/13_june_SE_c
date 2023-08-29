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
class com{
	public:
		void abx(){
			cout<<"\nThis is com class \n";
		}
};

class sec:public dep, public com{
	
	
	public:
		
		void htj(){
			
			cout<<"\nThis is sec Class";
			
		}
};
int main(){
	dep obj;
	obj.display();
	obj.display1();
	cout<<"\n----------------------------------------\n";
	com obj1;
	
	obj1.abx();
	cout<<"\n----------------------------------------\n";
	sec obj2;
	obj2.display();
	obj2.display1();
	obj2.abx();
	obj2.htj();
	return 0;
}
