#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n; 
    
    scanf("%d",&n);
    if (n % 2 == 1)
        printf("Weird");
    else
    {
        if (n > 20)
            printf("Not Weird");
        else 
        {
            if (n < 6)
                printf("Not Weird");
            else
                printf("Weird");
        }
    }
    return 0;
}