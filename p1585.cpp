#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int t, flag0, n, i, j, count;
    string s;
    scanf("%d ", &t);
    for(i=0; i<t; i++) {
        getline(cin, s);
        flag0 = 0;
        count = 0;
        n = 0;
        for(j=0; s[j]; j++) {
            if(s[j]=='O' && flag0==1) {
                n++;
                count+=n;
            }else if(s[j]=='O' && flag0==0) {
                flag0 = 1;
                n = 1;
                count++;
            }else {
                flag0 = 0;
            }
        }
        printf("%d\n", count);
    }
}
