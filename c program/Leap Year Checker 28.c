#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int year;
    scanf("%d",&year);
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)){
        printf("Leap Year\n");
    }
    else {
        printf("Not a Leap Year\n");
    }
    
    return 0;
}