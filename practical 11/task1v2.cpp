#include<iostream>
using namespace std;

class A{
	public:
	int x;
	int y;
};

class B: public A{
  public:
	void display(){
	x = 30;
	y = 40;
	cout<<x<<" "<<y<<endl;
	}
};

int main(){
B obj;
obj.display();
}
