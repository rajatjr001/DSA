#include <iostream>
using namespace std;

int fun(int r){
    if(r>100){
        return r-10;
    }
    else{
        return fun(fun(r+11));
    }
  

}

int main(){
    int n;
    
    n=fun(95);
    cout<<n;

}
