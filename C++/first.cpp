#include<iostream>
using namespace std;
class boy{
	public:
	void walk(){
		cout<<"This is boy";
	}
};
class person:public boy{
	public:
		void walk(){
			cout<<"This is boy 2";
		}
};


int main(){
	person obj;
	obj.walk();
}
