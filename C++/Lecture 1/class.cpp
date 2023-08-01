#include<iostream>
using namespace std;

class Person{   //class decleration 
	public: //Access public ,private ,protected
	void display()   //memeber function //method
	{
		cout<<"This is Person class";
	}
};

int main()
{
	Person obj; //craeting object
	obj.display(); //calling method
	return 0;
}
