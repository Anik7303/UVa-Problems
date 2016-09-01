#include <iostream>
#include <cstdio>
using namespace std;

#define N 55
long long int check[N];

void checkNum() {
    long long int i, j;
    check[0] = 0;
    check[1] = 1;
    for(i=2; i<=N; i++) {
        check[i] = check[i-2] + check[i-1];
    }
}


int main()
{
    checkNum();
    long long int i, a;
    while(scanf("%lld", &a)==1 && a!=0) {
        printf("%lld\n", check[a+1]);
    }
}
