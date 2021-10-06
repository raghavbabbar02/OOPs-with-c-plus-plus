#include<iostream>
#include<string>
using namespace std;

int main(){

	string str;
	getline(cin,str);
	
	int len = str.length();
	
	for(int i = 0; i<=len/2 ; i++){
		char temp = str[i];
		str[i] = str[len-1-i];
		str[len-1-i]=temp;
	}
	
	cout<<str<<endl;
	
	
	return 0;
	}
	
