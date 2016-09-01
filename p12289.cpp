#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
    int i, t, len, flag1, flag2;
    string s;
    scanf("%d", &t);
    getchar();
    for(i=0; i<t; i++) {
        getline(cin, s);
        len = s.length();
        flag1 = flag2 = 0;
        if(len==5) {
            printf("3\n");
        }else if(len==3) {
            if(s[0]=='o') {
                flag1++;
            }else if(s[0]=='t') {
                flag2++;
            }
            if(s[1]=='n') {
                flag1++;
            }else if(s[1]=='w') {
                flag2++;
            }
            if(s[2]=='e') {
                flag1++;
            }else if(s[2]=='o') {
                flag2++;
            }
            if(flag1>1) {
                printf("1\n");
            }else if(flag2>1) {
                printf("2\n");
            }
        }
    }
}
