#include <iostream>
#include <cstdio>
using namespace std;

#define sf scanf
#define pf printf

int main()
{
    long long int x, count, i;
    while(sf("%lld", &x)==1 && x>=0) {
        count = 1;
        for(i=1; i<=x; i++) {
            count+=i;
        }
        pf("%lld\n", count);
    }
}
