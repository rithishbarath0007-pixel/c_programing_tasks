#include<stdio.h>
int main(){
  int n=36;
  int count=0;
  for(int i=1;i*i<=n;i++){
      if(n%i==0){
          count++;
      }else{
        count+=2;
      }
  }
  printf("%d",count);
  return 0;
}