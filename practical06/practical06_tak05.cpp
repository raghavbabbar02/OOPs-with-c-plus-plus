#include<iostream>
using namespace std;

int main(){

    string str = "hello";
    string* ptr1 = &str;
    
    str[4] = 'a';
    string* ptr2 = &str;
  
    
    cout<<ptr1<<" "<<ptr2;
    
    return 0;
  
  }

