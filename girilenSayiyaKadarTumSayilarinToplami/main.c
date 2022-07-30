#include <stdio.h>
#include <stdlib.h>
//1 den 20 ye kadar olan sayilari bastirir.
int f(int n){

    if(n>1){
        f(n-1);
    }
    printf("%d ",n);
}
int main()
{
    f(20);
    return 0;
}
