#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int t, n, k, p, i, j, res;
    scanf("%d", &t);
    for(i=1; i<=t; i++) {
        scanf("%d %d %d", &n, &k, &p);
        res = k+(p%n);
        if(res>n) {
            res = res-n;
        }
        printf("Case %d: %d\n", i, res);
    }
}
