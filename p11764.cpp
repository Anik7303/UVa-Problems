#include <iostream>
#include <cstdio>
using namespace std;

#define sf scanf
#define pf printf

int main()
{
    int n, t, m, a[50], highjump, lowjump, i, j;
    sf("%d", &t);
    for(i=1; i<=t; i++) {
        sf("%d", &n);
        for(j=0; j<n; j++) {
            sf("%d", &a[j]);
        }
        highjump = lowjump = 0;
        m = a[0];
        for(j=1; j<n; j++) {
            if(m>a[j]) {
                lowjump++;
                m = a[j];
            }else if(m<a[j]) {
                highjump++;
                m = a[j];
            }
        }
        pf("Case %d: %d %d\n", i, highjump, lowjump);
    }
}
