#include <iostream>
using namespace std;

class  rect{
    public:
    int len;
    int breadth ;
};

int main(){
    rect r;
    r.len=67;
    r.breadth=88;
    cout<<"area"<<r.len*r.breadth<<endl;
    cout<<"perimeter"<<2*(r.len+r.breadth)<<endl;


}
