#include <iostream>
#include <cstdio>
using namespace std;

int colaCount(int n) {
    int sum = n, x;
    while(n>1) {
        x = n%3;
        n/=3;
        sum+=n;
        n+=x;
        if(n==2) {
            n+=3-n;
        }
    }
    return sum;
}

int main()
{
    int x;
    while(scanf("%d", &x)!=EOF) {
        printf("%d\n", colaCount(x));
    }
}
