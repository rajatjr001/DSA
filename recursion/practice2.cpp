//print no 1 to n using recursion 

#include <iostream>
using namespace std;
void no(int i,int n){
    if(i<1){
        return;
    }
  
    no(i-1,n);
    cout<<i;
}
int main(){
    int i=3,n=3;
    no(i,n);
    
}