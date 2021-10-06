#include<iostream>
#include<string>
using namespace std;

int main(){
	
	string str;
	getline(cin,str);
	
	int len = str.length();
	int flag = 0;
	
	for(int i=0 ; i<str.length() ; i++){
		
		if(str[i] != str[len-1-i]){
			flag=1;
			break;
			}
		}
			
			if(flag == 1){
				cout<<"not a palidrome"<<endl;
			}
			else{
				cout<<"palindrome"<<endl;
				}
				
				return 0;
			}
		
	
