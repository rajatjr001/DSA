// to increase the size of an  array

//print no n to 1 using recursion 
#include <iostream>
using namespace std;
int main(){
    int i;
    int *p=new int[5];
    int *q=new int[10];
    p[0]=8;p[1]=9;p[2]=6;
    for(i=0;i<=5;i++)
        q[i]=p[i];
        delete[] p;
        p=q;
        q=NULL;
    for(int i=0;i<=5;i++){
        cout<<p[i]<<" ";
    }

}
