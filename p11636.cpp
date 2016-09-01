#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

#define sf scanf
#define pf printf

int main()
{
    int x, y, i, count=1;
    while(sf("%d", &x)==1 && x>=0) {
        for(i=0; i<16; i++) {
            y = pow(2, i);
            if(x<=y) {
                pf("Case %d: %d\n", count, i);
                break;
            }
        }
        count++;
    }
}
