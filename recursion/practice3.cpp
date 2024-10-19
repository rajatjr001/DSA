//print no n to 1 using recursion 

#include <iostream>
using namespace std;
int power(int i,int n){
    if(n==0){
        return 1;
    }
    else{
        return i*(power(i,n-1));
    }
}
int main(){
    int c;
    int i=3,n=4;
    c=power(i,n);
    cout<<c;

    
}