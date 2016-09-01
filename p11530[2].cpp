#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int T, i, j, count;
    char ch[105];
    scanf("%d", &T);
    getchar();
    for(i=1; i<=T; i++) {
        gets(ch);
        count = 0;
        for(j=0; ch[j]; j++) {
            if(ch[j]=='a' || ch[j]=='d' || ch[j]=='g' || ch[j]=='j' || ch[j]=='m' || ch[j]=='p' || ch[j]=='t' || ch[j]=='w' || ch[j]==' ') {
                count+=1;
            }else if(ch[j]=='b' || ch[j]=='e' || ch[j]=='h' || ch[j]=='k' || ch[j]=='n' || ch[j]=='q' || ch[j]=='u' || ch[j]=='x') {
                count+=2;
            }else if(ch[j]=='c' || ch[j]=='f' || ch[j]=='i' || ch[j]=='l' || ch[j]=='o' || ch[j]=='r' || ch[j]=='v' || ch[j]=='y') {
                count+=3;
            }else if(ch[j]=='s' || ch[j]=='z') {
                count+=4;
            }
        }
        printf("Case #%d: %d\n", i, count);
    }
}
