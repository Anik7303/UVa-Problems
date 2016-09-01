#include <iostream>
#include <cstdio>
using namespace std;

#define sf scanf
#define pf printf

int main()
{
    int T, N, P, i, j, k, x, count, a[3660];
    sf("%d", &T);
    for(i=0; i<T; i++) {
        sf("%d", &N);
        for(j=0; j<N; j++) {
            a[j] = 0;
        }
        sf("%d", &P);
        for(j=0; j<P; j++) {
            sf("%d", &x);
            for(k=x-1; k<N; k+=x) {
                a[k] = 1;
            }
        }
        for(j=5; j<N; j+=7) {
            a[j] = 0;
        }
        for(j=6; j<N; j+=7) {
            a[j] = 0;
        }
        count = 0;
        for(j=0; j<N; j++) {
            if(a[j]==1) {
                count++;
            }
        }
        pf("%d\n", count);
    }
}
