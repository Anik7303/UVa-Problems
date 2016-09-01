#include <iostream>
#include <cstdio>
using namespace std;

long long int ternary(long long int x) {
    long long int i, m, t;
    i = 1, t = 0;
    while(x>0) {
        m = x%3;
        x/=3;
        t+=m*i;
        i*=10;
    }
    return t;
}

int main()
{
    long long int x;
    while(scanf("%lld", &x)==1 && x>=0) {
        printf("%lld\n", ternary(x));
    }
}
