#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void main()
{
    int q[9];
    int a,b,i;
    scanf("%d",&a);
    scanf("%d",&b);
    srand(time(NULL));
    for (i = 0; i < 9; i++) {
        q[i] = a+(rand()%(b-a+1));
        printf("%d,", q[i]);
    }
}
