#include<iostream>
using namespace std;

int main(){
    
    string a,b;
    getline(cin,a);
    getline(cin,b);
    
    int x=a.compare(b);
    
    cout<<x;
    
    return 0;
   }
