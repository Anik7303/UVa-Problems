#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

#define sf scanf
#define pf printf

int main()
{
    char ch1[20], ch2[20], ch3[20], c;
    long long int d1, d2, m1, m2, y1, y2, i, j, k, t, x, y, flagd, flagm;
    sf("%lld ", &t);
    for(i=1; i<=t; i++) {
        sf("%s%s", &ch1, &ch2);
        flagd = flagm = 0;
        for(k=0, j=0; j<10; j++) {
            if(ch1[j]=='/' && flagd==0) {
                ch3[k] = '\0';
                d1 = atoi(ch3);
                flagd = 1;
                k = 0;
            }else if(ch1[j]=='/' && flagm==0) {
                ch3[k] = '\0';
                m1 = atoi(ch3);
                flagm = 1;
                k = 0;
            }else {
                ch3[k++] = ch1[j];
            }
        }
        ch3[k] = '\0';
        y1 = atoi(ch3);
        flagd = flagm = 0;
        for(k=0, j=0; j<10; j++) {
            if(ch2[j]=='/' && flagd==0) {
                ch3[k] = '\0';
                d2 = atoi(ch3);
                flagd = 1;
                k = 0;
            }else if(ch2[j]=='/' && flagm==0) {
                ch3[k] = '\0';
                m2 = atoi(ch3);
                flagm = 1;
                k = 0;
            }else {
                ch3[k++] = ch2[j];
            }
        }
        ch3[k] = '\0';
        y2 = atoi(ch3);
        x = d1+m1*30+y1*12*30;
        y = d2+m2*30+y2*12*30;
        if(y>x) {
            pf("Case #%lld: Invalid birth date\n", i);
        }else if(y<x && (x-y)>=47160) {
            pf("Case #%lld: Check birth date\n", i);
        }else {
            pf("Case #%lld: %lld\n", i, (x-y)/360);
        }
    }
}
