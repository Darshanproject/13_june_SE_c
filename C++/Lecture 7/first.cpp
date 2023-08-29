#include<iostream>
using namespace std;
class person{
	public:
		void run(){
			cout<<"Person is running";
		}
};
class boy:public person{
	public:
		void run(){
			
			cout<<"Boy is running";
		}
};

int main(){
	boy obj;
	obj.run();
	return  0;
}
