#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

#define MAX 2000000
int a[MAX];

int main()
{
    int n, i, j;
    while(scanf("%d", &n)==1) {
        if(n==0) break;
        for(i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        sort(a,a+i);
        for(j=0; ; ) {
            printf("%d", a[j]);
            j++;
            if(j>=n) break;
            printf(" ");
        }
    printf("\n");
    }
}
