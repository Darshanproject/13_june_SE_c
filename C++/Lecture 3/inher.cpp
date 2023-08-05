/*
there are 5 types of inher
1)singel

class demo{
function

} class 2{

}
*/

#include<iostream>
using namespace std;
class  A{
	public:
	void dispaly(){
		cout<<"This is parent class ";
	}
};
class B :public A{
	
};

main(){
	B obj;
	obj.dispaly();
}
