#include <iostream>
#include <cstdio>
using namespace std;

int flag1, flag2, flag3;

void CommonFactors(long long int x) {
    long long int i;
    while(x%2==0) {
        if(flag1==1) {
            printf(" x ");
        }
        printf("2");
        x/=2;
        flag1 = 1;
        flag2 = 1;
        flag3 = 1;
    }
    for(i=3; i*i<=x; i+=2) {
        while(x%i==0) {
            if(flag2==1) {
                printf(" x ");
            }
            printf("%lld", i);
            x/=i;
            flag2 = 1;
            flag3 = 1;
        }
    }
    if(x>2) {
        if(flag3==1) {
            printf(" x ");
        }
        printf("%lld", x);
    }
    printf("\n");
}

int main()
{
    long long int x;
    while(scanf("%lld", &x)==1 && x!=0) {
        flag1 = flag2 = flag3 = 0;
        if(x<0) {
            printf("%lld = -1 x ", x);
            CommonFactors(-1*x);
            flag1 = 1;
            flag2 = 1;
            flag3 = 1;
        }else {
            printf("%lld = ", x);
            CommonFactors(x);
            flag1 = 1;
            flag2 = 1;
        }
    }
}
