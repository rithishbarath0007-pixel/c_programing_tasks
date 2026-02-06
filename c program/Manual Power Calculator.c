#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 int a ,e;
    long long result=1;
    scanf("%d %d", &a,&e);
    for(int i=0;i<e;i++){
   result *=a;
}
    printf("%lld",result);
    return 0;
}