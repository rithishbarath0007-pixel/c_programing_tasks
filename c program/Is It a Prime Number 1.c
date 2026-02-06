#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   
    int n,i,count=0;
    scanf("%d",&n);
    if(n<=1){
        printf("Not Prime");
        return 0;}
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            count=1;
            break;
        }
    }
    if(count==0)
        printf("Prime");
    else
        printf("Not Prime");
    return 0;

}
