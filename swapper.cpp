#include<iostream>
using namespace std;
void swapper(int arr[10],int  n){
    for(int i=0;i<=n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);

        }
    
    }
}

void printer(int arr[],int n){


for(int i=0;i<=n;i++){
    cout<<arr[i];
}

}

int main()
{   int n;     //size of array
    int arr[10];  //array initilization
    
    for(int i=0;i<=n;i++){
        
        cin>>arr[i];

    }
    swapper(arr,n);
    printer(arr,n);

}

