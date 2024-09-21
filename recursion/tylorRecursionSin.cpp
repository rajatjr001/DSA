#include <iostream>
using namespace std;

int e(int x,int n){
    static int p=1,f=1;
    int r;
    if(n==0){
        return x;

    }
    r=e(x,n-1);
    p=p*(2*(x+1));
    f=f*(2*(n+1));


    return r+p/f;

}
int main(){
    int b;
    b=e(3,4);
    cout<<b<<endl;
}