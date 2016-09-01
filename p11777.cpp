#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

#define sf scanf
#define pf printf

int main()
{
    int t, term1, term2, finalE, attendance, cTest, a[3], i, j, result;
    sf("%d", &t);
    for(i=1; i<=t; i++) {
        sf("%d %d %d %d", &term1, &term2, &finalE, &attendance);
        for(j=0; j<3; j++) {
            sf("%d", &a[j]);
        }
        sort(a, a+3);
        cTest = (a[1]+a[2])/2;
        result = term1 + term2 + finalE + attendance + cTest;
        if(result>=90) {
            pf("Case %d: A\n", i);
        }else if(result>=80) {
            pf("Case %d: B\n", i);
        }else if(result>=70) {
            pf("Case %d: C\n", i);
        }else if(result>=60) {
            pf("Case %d: D\n", i);
        }else {
            pf("Case %d: F\n", i);
        }
    }
}
