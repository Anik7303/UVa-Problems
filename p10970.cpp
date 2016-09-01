#include <iostream>
#include <cstdio>
using namespace std;

#define sf scanf
#define pf printf

int main()
{
    int m, n;
    while(sf("%d %d", &m, &n)==2) {
        pf("%d\n", m*n-1);
    }
}
