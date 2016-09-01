#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int i, j, k, n, total;
    while(scanf("%d", &n)==1 && n!=0) {
        total = 1;
        for(i=2; i<=n; i++) {
            total+=i*i;
        }
        printf("%d\n", total);
    }
}
