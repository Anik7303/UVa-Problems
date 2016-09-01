#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int x, y, a[3];
    while((scanf("%d %d %d", &a[0], &a[1], &a[2])==3) && a[0] && a[1] && a[2]) {
        sort(a, a+3);
        x = a[0]*a[0] + a[1]*a[1];
        y = a[2]*a[2];
        if(x==y) {
            printf("right\n");
        }else {
            printf("wrong\n");
        }
    }
}
