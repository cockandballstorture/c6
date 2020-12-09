#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void main()
{
    int i, r;
    srand(time(NULL));
    for (i = 0; i < 5; i++) {
        r = rand()%4;
        printf("%d\n", r);
    }
}
