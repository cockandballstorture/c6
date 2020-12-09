#include <stdio.h>
#include <string.h>
int ln(char a[127]){
    int i=0;
    while (a[i] != 0) {
        i++;
    }
    return (i);
}
void main()
{
    char a[127];
    scanf("%126s",a);
    printf("%d\n",ln(a));
    printf("%d",strlen (a));
}
