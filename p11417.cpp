#include <iostream>
#include <cstdio>
using namespace std;

int GCD(int x, int y) {
    if(y==0) {
        return x;
    }else {
        return GCD(y, x%y);
    }
}

int main()
{
    int i, j, N, G, x, a, gcd=0;
    while(scanf("%d", &N)==1 && N!=0) {
        G = 0;
        for(i=1; i<N; i++) {
            for(j=i+1; j<=N; j++) {
                G+=GCD(i, j);
            }
        }
        printf("%d\n", G);
    }
}
