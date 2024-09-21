#include <iostream>
using namespace std;

int fibo(int n){
    if(n<=1){
        f[n]=n;
        return n;
    }
    else{
        if[f[n-2]==-1]{
            f[n-2]=fibo(n-2);
        }
        if(f[n-1]==-1){
            f[n-1]=fibo(n-1);
        }
        return f[n-2]+f[n-1];


    }
}

int main(){
    int i;
    int f[10];
    for(i=0;i<10;i++){
        f[i]=-1;
    cout<<fibo(10);
    }
    return 0;
}