#include<iostream>
using namespace std;

class A{
	public:
		int x;
		int y;
};

class B : public A{
	public:
		void display(){
			cout<<x<<" "<<y<<endl;
		}
};

int main(){
	B obj;
	obj.x = 10;
	obj.y = 20;
	obj.display();
}
