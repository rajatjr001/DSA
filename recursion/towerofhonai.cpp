#include <iostream>
using namespace std;

void TOH(int n,int a,int b,int c){
    if(n>=1){
        TOH(n-1,a,c,b);
        cout<<"from"<<a<<"to"<<c<<endl;
        TOH(n-1,b,a,c);
    }
}

int main(){
    TOH(3,1,2,3);
}