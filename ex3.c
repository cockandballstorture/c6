#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void main()
{
    int i;
    float q,r;
    srand(time(NULL));
    for (i = 0; i < 5; i++) {
        r = rand()%4;
        q = rand();
        while(q>1){
        q=q/10;
        }
        if (r==3){
            printf("%f\n",r);
        }
        else{
        q=q/10;
        r=r+q;
        printf("%f\n",r);
        }   
        }
}
