#include <iostream>
#include <cstdio>
using namespace std;

#define sf scanf
#define pf printf

long long int pieceCounter(long long int n) {
    if(n==0) {
        return 1;
    }else {
        return n+pieceCounter(n-1);
    }
}

int main()
{
    long long int x, count;
    while(sf("%lld", &x)==1 && x>=0) {
        pf("%lld\n", pieceCounter(x));
    }
}
