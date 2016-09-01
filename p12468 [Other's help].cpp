#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int a, b, r1, r2;
    while(scanf("%d %d", &a, &b)==2) {
        if(a==-1 && b==-1) {
            break;
        }
        r1 = fabs(a-b);
        if(r1>50) {
            r1 = 100-r1;
        }
        printf("%d\n", r1);
    }
}
