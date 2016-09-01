#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
    char ch[10000];
    int i, j, t, n, flag, p, q;
    scanf("%d", &t);
    getchar();
    for(i=0; i<t; i++) {
        gets(ch);
        n = strlen(ch);
        flag = 0;
        for(j=2; j<=100; j++) {
            if(j*j==n) {
                flag = 1;
                break;
            }
        }
        if(flag==0) {
            printf("INVALID");
        }else {
            for(p=0; p<j; p++) {
                for(q=p; q<n; q+=j) {
                    printf("%c", ch[q]);
                }
            }
        }
        printf("\n");
    }
}
