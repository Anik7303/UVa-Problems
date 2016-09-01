#include <iostream>
#include <cstdio>
using namespace std;

#define sf scanf
#define pf printf

int main()
{
    int x, y, z, p, t, i, res;
    sf("%d", &t);
    for(i=0; i<t; i++) {
        sf("%d %d %d", &x, &y, &z);
        p = x+x-y;
        res = (p*z)/(x+y);
        if(res<0) {
            res = 0;
        }
        pf("%d\n", res);
    }
}
