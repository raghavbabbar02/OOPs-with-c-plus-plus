#include<iostream>
using namespace std;

int main(){
    
    string a,b;
    getline(cin,a);
    getline(cin,b);
    
    if(a.length() != b.length()){
            cout<<"not equal";
    }
    else{
        int flag=0;
        for( int i=0 ; i<a.length() ; i++){
            if(a[i]!=b[i]){
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout<<"not equal";
        }
        else{
            cout<<"equal";
        }
    }
    return 0;
 }
    
