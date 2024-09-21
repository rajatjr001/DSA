#include <iostream>
using namespace std;

int fibo(int n){
    if(n<=1){
        return n;
    }
    return(fibo(n-2)+(n-1));
}

int main(){
    int n;
    cout<<fibo(2);
}


