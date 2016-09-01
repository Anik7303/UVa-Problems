#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int a, m, r, g, i, t, n, j, k, count, pizza, c[6], x, check;
    string s;
    scanf("%d", &n);
    getchar();
    for(j=0; j<n; j++) {
        getline(cin, s);
        a = m = r = g = t = i = 0;
        for(k=0; s[k]; k++) {
            if(s[k]=='A') {
                a++;
            }else if(s[k]=='M') {
                m++;
            }else if(s[k]=='R') {
                r++;
            }else if(s[k]=='G') {
                g++;
            }else if(s[k]=='I') {
                i++;
            }else if(s[k]=='T') {
                t++;
            }
        }
        c[0] = m;
        c[1] = a/3;
        c[2] = r/2;
        c[3] = g;
        c[4] = i;
        c[5] = t;
        sort(c, c+6);
        check = count = c[5];
        x = pizza = 0;
        a = a/3;
        r = r/2;
        while(check>0) {
            check = count - x;
            if(m>=check && a>=check && r>=check && g>=check && i>=check && t>=check) {
                pizza = check;
                break;
            }
            x++;
        }
        printf("%d\n", pizza);
    }
}
