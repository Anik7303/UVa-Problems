#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

#define sf scanf
#define pf printf

int main()
{
    int a[3], t, i;
    sf("%d", &t);
    for(i=0; i<t; i++) {
        sf("%d %d %d", &a[0], &a[1], &a[2]);
        sort(a, a+3);
        if(a[0]+a[1]>a[2]) {
            pf("OK\n");
        }else {
            pf("Wrong!!\n");
        }
    }
}
