#include<iostream>
using namespace std;
class person{
	public:
		void sum(int a,int b){
			printf("This is your addtion of intger %d",a+b);
		}
		void sum(double c,double d){
			printf("This is your addtion for double %d",c+d);
		}
};

int main(){
	person obj;
	obj.sum(2,2);
	obj::sum(2.5,22.5);
}
