#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int n, i, j, count, flag, a[3000], b[3000];
    while(scanf("%d", &n)!=EOF){
        for(i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        count = n-1;
        for(i=0; i<count; i++) {
            b[i] = fabs(a[i]-a[i+1]);
        }
        for(i=1; i<n; i++) {
            flag = 0;
            for(j=0; j<count; j++) {
                if(b[j]!=i) {
                    flag++;
                }
            }
            if(flag==count) {
                break;
            }
        }
        if(flag==count) {
            printf("Not jolly\n");
        }else {
            printf("Jolly\n");
        }
    }
}
