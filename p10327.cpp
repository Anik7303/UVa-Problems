#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int N, a[1000], i, j, count, m, temp;
    while((scanf("%d", &N))!=EOF) {
        count = 0;
        for(i=0; i<N; i++) {
            scanf("%d", &a[i]);
        }
        for(i=1; i<N; i++) {
            m = N-i;
            for(j=0; j<m; j++) {
                if(a[j]>a[j+1]) {
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                    count++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n", count);
    }
}
