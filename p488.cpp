#include <iostream>
#include <cstdio>
using namespace std;

#define sf scanf
#define pf printf

int main()
{
    int i, j, k, l, a, f, t, m, n;
    sf("%d", &t);
    for(i=0; i<t; i++) {
        if(i>0) {
            pf("\n");
        }
        sf("%d", &a);
        sf("%d", &f);
        for(j=0; j<f; j++) {
            if(j>0) {
                pf("\n");
            }
            m = 2*a-1;
            n = 1;
            for(k=1; k<=m; k++) {
                for(l=1; l<=n; l++) {
                    pf("%d", n);
                }
                pf("\n");
                if(k>=a) {
                    n--;
                }else {
                    n++;
                }
            }
        }
    }
}
