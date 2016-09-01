#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    string S, T;
    int c, move, scount, tcount, i ,j, count1, count2;
    scanf("%d ", &c);
    for(i=1; i<=c; i++) {
        getline(cin, S);
        getline(cin, T);
        move = scount = tcount = count1 = count2 = 0;
        for(j=0; S[j] && T[j]; j++) {
            if(S[j]!=T[j]) {
                if(S[j]=='?') {
                    move++;
                }else if(S[j]=='1') {
                    scount++;
                }
                if(T[j]=='1') {
                    tcount++;
                }
                if(S[j]=='1' && T[j]=='0') {
                	count1++;
                }
                if(S[j]=='0' && T[j]=='1') {
                	count2++;
                }
            }
        }
        if(scount!=tcount && scount>tcount) {
            printf("Case %d: -1\n", i);
        }else if(count1>=count2) {
            move+=count1;
            printf("Case %d: %d\n", i, move);
        }else if(count2>count1) {
            move+=count2;
            printf("Case %d: %d\n", i, move);
        }
    }
}
