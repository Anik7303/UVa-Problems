#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;



int main()
{
    int i, j, n, flag1, flag2;
    int arr[11];
    scanf("%d", &n);
    printf("Lumberjacks:\n");
    for(i=0; i<n; i++) {
        for(j=0; j<10; j++) {
            scanf("%d", &arr[j]);
        }
        flag1 = flag2 = 0;
        for(j=1; j<10; j++) {
            if(arr[j]>arr[j-1]) {
                flag1 = 1;
            }
        }
        for(j=1; j<10; j++) {
            if(arr[j]<arr[j-1]) {
                flag2 = 1;
            }
        }
        if(flag1==1 && flag2==1) printf("Unordered");
        else printf("Ordered");
        printf("\n");
    }
}
