#include <stdio.h>

int main() {

  int n1;

  printf("Enter percentge : ");
  scanf("%d",&n1);


  if (n1>=90 && n1<100){
    printf("grade a");
  }
  
  else if( n1>=80 && n1<=89){
    printf("grade b");
  }


  else if(n1>=70 && n1<=79){
    printf("grade c");
  }
  else if(n1>= 60 && n1<=69){
    printf("grade d");
  }


  return 0;
}