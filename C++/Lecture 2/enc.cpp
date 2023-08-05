#include<iostream>
using namespace std;
class demo {
	public:
		int age;
		string name;
		void setInput(int age4)
		{
			this->age=age;
		}
		int getInput()
		{
			return age;
		}
			void setInput1(string name)
		{
			this->name=name;
		}
		string getInput1()
		{
			return name;
		}	
};


main(){
	demo obj;
	obj.setInput(24);
	obj.setInput1("Chirag");
	cout<<obj.getInput()<<"\n";
	cout<<obj.getInput1();
}      
