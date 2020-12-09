#include <stdio.h>
int sq(int a){
    int i;
    int k;
    k=1;
    for (i=2;i<a+1;i++){
        k=k*i;
    }
    return (k);
}
void main()
{
    int a;
    scanf("%d",&a);
    a=sq(a);
    printf("%d",a);
}
