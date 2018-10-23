
#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    
    if (a < b)
    {
        a = b;
    }
    if (a < c)
    {
        a = c;
    }
    if (a < d)
    {
        a = d;
    }
    return (a);
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
