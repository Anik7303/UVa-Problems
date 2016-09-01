#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    signed long long int a, b, c;
    long long int t, i;
    scanf("%lld", &t);
    for(i=1; i<=t; i++) {
        scanf("%llu %llu %llu", &a, &b, &c);
        if(a+b>c && a+c>b && b+c>a) {
            if(a==b && b==c && c==a) {
                printf("Case %lld: Equilateral\n", i);
            }else if(a==b || b==c || c==a) {
                printf("Case %lld: Isosceles\n", i);
            }else {
                printf("Case %lld: Scalene\n", i);
            }
        }else {
            printf("Case %lld: Invalid\n", i);
        }
    }
}
