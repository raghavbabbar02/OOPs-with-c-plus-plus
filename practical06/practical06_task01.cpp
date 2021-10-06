#include <iostream>
using namespace std;

int main(){
	int a = 10;
	int b = 20;
	float c = 4.5f;
	float d = 5.5f;
	string x = "raghav";
	string y = "babbar";
	
	cout<<a+b<<endl; // int + int
	cout<<c+d<<endl; // float + float
	cout<<a+c<<endl; // int + float
	cout<<x+y<<endl; // string + string
	cout<<x+a<<endl; // string + int
	return 0;
}

