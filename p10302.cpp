#include <iostream>
#include <cstdio>
using namespace std;

#define sf scanf
#define pf printf

int main()
{
    long long int x, sum;
    while(sf("%lld", &x)==1) {
        sum = (x*x*(x+1)*(x+1))/4;
        pf("%lld\n", sum);
    }
}
