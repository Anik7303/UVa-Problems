#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char ch1[1000000], ch2[1000000];
    int i, j, k, l, m;
    while(gets(ch1)) {
        j = m = 0;
        for(i=0; ch1[i]; i++) {
            if(ch1[i]==' ') {
                for(k=i-1; k>=m; k--) {
                    ch2[j++] = ch1[k];
                }
                ch2[j++] = ' ';
                m = j;
            }
        }
        for(k=i-1; k>=m; k--) {
            ch2[j++] = ch1[k];
        }
        ch2[j] = '\0';
        puts(ch2);
    }
}
