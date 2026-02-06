#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int q,e,a,d,z,c,s,sum=0;
    float pro,l;
    scanf("%d %d",&q,&e);
    scanf("%d %d",&a,&d);
    scanf("%d %d",&z,&c);
    scanf("%d",&s);
    sum=(q*e)+(a*d)+(z*c); 
    pro=sum;
    l=pro+(pro*10/100);
    printf("Total (Before Tax): %.2f\n",pro);
    printf("Total (After Tax): %.2f\n",l);
    if(l<s){
        printf("Within Budget");
    }           
    else
    {
        printf("Over Budget");
    }
           
    return 0;
}