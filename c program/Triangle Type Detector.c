#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if(a+b>c && b+c>a && a+c>b){
        if(a==b && b==c){
    printf("Equilateral Triangle");
        }
        else if(a==b || b==c || a==c){
            printf("Isosceles Triangle");
        }
        else
            printf("Scalene Triangle");      
    }
    else{
    printf("Not a valid triangle");
    }
    return 0;
}