#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

int simpleArraySum(int ar_count, int* ar) 
{
	int i=0, result=0;
    scanf("%d",&ar_count);
    for(i=0; i < ar_count; i++)
        {
        scanf("%d ",&ar[i]);
        result=result+ar[i];
        }
    return(result);
    printf("%d",result);
}

