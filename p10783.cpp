#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a, b, t, i, j, sum;
    scanf("%d", &t);
    for(i=1; i<=t; i++) {
        scanf("%d", &a);
        scanf("%d", &b);
        sum = 0;
        for(j=a; j<=b; j++) {
            if(j%2==1)
                sum+=j;
        }
        printf("Case %d: %d\n", i, sum);
    }
}
