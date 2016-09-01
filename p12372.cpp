#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int i, t, l, w, h;
    scanf("%d", &t);
    for(i=1; i<=t; i++) {
        scanf("%d %d %d", &l, &w, &h);
        printf("Case %d: ", i);
        if(l<=20 && w<=20 && h<=20) {
            printf("good\n");
        }else {
            printf("bad\n");
        }
    }
}
