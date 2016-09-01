#include <iostream>
#include <cstdio>
using namespace std;

long long int f91(long long int N){
    if(N>=101) {
        return N-10;
    }else if(N<=100) {
        return f91(f91(N+11));
    }
}

int main()
{
    long long int N;
    while(scanf("%lld", &N)==1 && N!=0) {
        printf("f91(%lld) = %d\n", N, f91(N));
    }
}
