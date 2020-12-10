#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int r(int *p,int x){
    int i;
    for (i=0;i<x;i++){
        srand(time(NULL));
        *p=rand();
        p++;
    }
    if (x%2==0){
        printf("A");
    }
    else{
        printf("C");
    }
}
void main()
{
    int *p;
    int i;
    int x;
    scanf("%d",&x);
    int a[x];
    p=&a[0];
    r(p,x);
}
