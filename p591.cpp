#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int n, i, j, a[100], sum, moves, blocks, count=0;
    while(scanf("%d", &n)==1 && n!=0) {
        sum = 0;
        for(i=0; i<n; i++) {
            scanf("%d", &a[i]);
            sum+=a[i];
        }
        blocks = sum/n;
        moves = 0;
        for(i=0; i<n; i++) {
            if(a[i]<blocks) {
                moves += fabs(a[i]-blocks);
            }
        }
        printf("Set #%d\n", ++count);
        printf("The minimum number of moves is %d.\n\n", moves);
    }
}
