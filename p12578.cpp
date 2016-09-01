#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

#define sf scanf
#define pf printf

int main()
{
    int i, t;
    double l, w, r, r_area, g_area;
    sf("%d", &t);
    for(i=0; i<t; i++) {
        sf("%lf", &l);
        w = (l*6)/10;
        r = l/5;
        r_area = acos(-1)*r*r;
        g_area = l*w - r_area;
        pf("%0.2lf %0.2lf\n", r_area, g_area);
    }
}
