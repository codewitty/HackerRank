#include <stdio.h>
#include <stdlib.h>

int main()
{
    int alice[3];
    int bob[3];
    int s_a, s_b = 0;
    int i = 0;
    
    scanf("%d %d %d", &alice[0], &alice[1], &alice[2]);
    scanf("%d %d %d", &bob[0], &bob[1], &bob[2]);
    
    while(i < 3)
    {
        if (alice[i] > bob[i])
            s_a++;
        else if (alice[i] < bob[i])
            s_b++;
        i++;
    }
    printf("%d %d",s_a, s_b);
}
