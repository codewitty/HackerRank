#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main()
{
    int n;
    int i;
    int r;
    
    scanf("%d", &n);
    i = 1;
    while (i <= 10)
    {
        r = n * i;
        printf("%d x %d = %d\n", n,i,r);
        i++;
    }
    return (0);
}