#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

#define sf scanf
#define pf printf

int a[1000000];

int main()
{
    int x, n, q, i, j, k, flag;
    k = 0;
    while(sf("%d %d", &n, &q)==2 && (n||q)!=0) {
        k++;
        for(i=0; i<n; i++) {
            sf("%d", &a[i]);
        }
        sort(a, a+n);
        pf("CASE# %d:\n", k);
        for(i=0; i<q; i++) {
            sf("%d", &x);
            flag = 0;
            for(j=0; j<n; j++) {
                if(a[j]==x) {
                    pf("%d found at %d\n", x, j+1);
                    flag = 0;
                    break;
                }
                flag = 1;
            }
            if(flag == 1) {
                pf("%d not found\n", x);
            }
        }
    }
}
