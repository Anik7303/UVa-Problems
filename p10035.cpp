#include <iostream>
#include <cstdio>
using namespace std;

#define sf scanf
#define pf printf

int main()
{
    unsigned long long int a, b, x, y, p, i, t, count;
    while(sf("%llu %llu", &a, &b)==2 && (a||b)) {
        count = p = 0;
        if(b>a) {
            t = a;
            a = b;
            b = t;
        }
        while(a>0) {
            x = a%10;
            y = b%10;
            a/=10;
            b/=10;
            i = x+y+p;
            if(i>9) {
                p = 1;
                count++;
            }else {
                p = 0;
            }
        }
        if(count==0) {
            pf("No carry operation.\n");
        }else if(count==1) {
            pf("1 carry operation.\n");
        }else {
            pf("%llu carry operations.\n", count);
        }
    }
}
