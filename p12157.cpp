#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a[20], i, j, k, n, t, p1, p2, count, total1, total2;
    scanf("%d", &t);
    for(i=1; i<=t; i++) {
        scanf("%d", &n);
        p1 = p2 = 0;
        for(j=0; j<n; j++) {
            count = 1;
            scanf("%d", &a[j]);
            for(k=29; k<a[j]; k+=30) {
                count++;
            }
            p1 += 10*count;
            if(count%2==0) {
                p2 += 15*(count/2);
            }else if(count%2==1) {
                p2 += 15*(count/2+1);
            }
        }
        printf("Case %d: ", i);
        if(p1==p2) {
            printf("Mile Juice %d\n", p1);
        }else if(p1>p2) {
            printf("Juice %d\n", p2);
        }else if(p2>p1) {
            printf("Mile %d\n", p1);
        }
    }
}
