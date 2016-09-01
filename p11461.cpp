#include <iostream>
#include <cstdio>
using namespace std;

#define N 100001
#define sf scanf
#define pf printf

int isSquareNum[N];

void cheskSquare() {
    long long int i, check;
    for(i=1; i*i<=N; i++) {
        check = i*i;
        if(check<=N) {
            isSquareNum[check] = 1;
        }
    }
}

int main()
{
    cheskSquare();
    long long int x, y, i, count;
    while(sf("%lld %lld", &x, &y)==2 && x && y) {
        count = 0;
        for(i=x; i<=y; i++) {
            if(isSquareNum[i]==1) {
                count++;
            }
        }
        pf("%lld\n", count);
    }
}
