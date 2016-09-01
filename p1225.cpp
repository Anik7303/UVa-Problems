#include <iostream>
#include <cstdio>
using namespace std;

#define sf scanf
#define pf printf

long long int a[10];

void digitCount(long long int x) {
    int k;
    while(x!=0) {
        k=x%10;
        if(k==0) a[0]++;
        else if(k==1) a[1]++;
        else if(k==2) a[2]++;
        else if(k==3) a[3]++;
        else if(k==4) a[4]++;
        else if(k==5) a[5]++;
        else if(k==6) a[6]++;
        else if(k==7) a[7]++;
        else if(k==8) a[8]++;
        else if(k==9) a[9]++;
        x/=10;
    }
}

int main()
{
    long long int i, j, x, n;
    sf("%lld", &n);
    for(i=0; i<n; i++) {
        sf("%lld", &x);
        for(j=1; j<=x; j++) {
            digitCount(j);
        }
        for(j=0; j<10; ) {
            pf("%lld", a[j]);
            a[j++]=0;
            if(j==10) {
                break;
            }
            pf(" ");
        }
        pf("\n");
    }
}
