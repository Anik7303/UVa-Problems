#include <iostream>
#include <cstdio>
using namespace std;

#define sf scanf
#define pf printf

long long int counter(long long int n, long long int k) {
    long long int count = n, x;
    while(n>=k) {
        x = n%k;
        n/=k;
        count+=n;
        n+=x;
    }
    return count;
}

int main()
{
    long long int n, k;
    while(sf("%lld %lld", &n, &k)==2) {
        pf("%lld\n", counter(n, k));
    }
}
