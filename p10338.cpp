#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

#define sf scanf
#define pf printf

int main()
{
    unsigned long long int t, i, j, k, l,  m, n, count[20], len, total[20], fact, flag, value;
    char ch[22], c;
    sf("%llu", &t);
    getchar();
    for(i=1; i<=t; i++) {
        for(j=0; j<20; j++) {
            count[j] = 0;
            total[j] = 1;
        }
        sf("%s", &ch);
        len = strlen(ch);
        sort(ch, ch+len);
        ch[len] = ':';
        ch[len+1] = '\0';
        c = ch[0];
        for(j=0, k=0; ch[j]; j++) {
            if(c==ch[j]) {
                count[k]++;
            }else {
                k++;
                c = ch[j];
                j--;
            }
        }
        total[0] = 1;
        for(j=0, m=0; j<k; j++) {
            fact = 1;
            for(l=1; l<=count[j]; l++) {
                fact*=l;
            }
            total[m++]*=fact;
        }
        for(j=2, value=1, flag=0, n=0; j<=len; j++) {
            value*=j;
            if(value%total[n]==0 && flag<=m) {
                value/=total[n];
                flag++;
                n++;
            }
        }
        pf("Data set %llu: %llu\n", i, value);
    }
}
