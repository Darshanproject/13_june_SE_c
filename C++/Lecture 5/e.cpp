#include<iostream>
using namespace std;
class a{
	public:
		void ab(){
			cout<<"This is class A \n";
		}
};
class b{
	public:
		void bc(){
			cout<<"This is class B \n";
		}
};

class c:public a,public b{
	public:
		void cc(){
		cout<<"this is class c \n";
		}
};

int main(){
	c obj;
	obj.ab();
	obj.bc();
	obj.cc();
}
