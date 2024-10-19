//print no n to 1 using recursion (backtrackking)

#include <iostream>
using namespace std;
void no(int i,int n){
    if(i<1){
        return;
    }
    cout<<i;
    no(i-1,n);
    
}
int main(){
    int i=3,n=4;
    no(i,n);
    
}