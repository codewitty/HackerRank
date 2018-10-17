#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char a[10000];
    int i;
    int t;
    
    scanf("%d", &t);
    while(t)
    {
        scanf("%s",a);
        i = 0;
        while (a[i])
        {
            if (i % 2 == 0)
                printf("%c", a[i]);
            i++;
        }
    i = 0;
    printf(" ");
        while (a[i])
        {
            if (i % 2 != 0)
                printf("%c", a[i]);
            i++;
        }
        t--;
        printf("\n");
    }
    return (0);
}