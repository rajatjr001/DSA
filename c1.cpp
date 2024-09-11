#include <iostream>
using namespace std;

void array1(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<< arr[i];
        arr[0]=4;
    }
}

int main(){
    int arr[5]={4,8,7,8,6};
    int size =8;
    array1(arr,size);
    

}