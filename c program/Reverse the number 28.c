#include <stdio.h>
int main(){
    int n=12345;
    int last=n%10;
    int first=n;
    int place=1;
    while(first>=9){
        first=first/10;
        place=place*10;

    }
    int middle=n%place;
    middle=middle/10;
    printf("%d",last*place+middle*10+first);
    return 0;
}