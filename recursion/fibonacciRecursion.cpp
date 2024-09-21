//***************************SIMPLE FIBONACCI SERIES********************//
#include <iostream>
using namespace std;

int fibo(int n){
    int a=0,b=1,sum,i;
    if(n<=1){
        return n;
    }
    for(i=2;i<=n;i++){
        sum=a+b;
        a=b;
        b=sum;
        
    }
    return sum;
}

int main(){
    cout<<fibo(5);
}

