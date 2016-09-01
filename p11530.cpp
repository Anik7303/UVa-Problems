#include <iostream>
#include <cstdio>
using namespace std;

#define sf scanf
#define pf printf
#define st stdin
#define fo freopen
#define fc fclose

int main()
{
    int i, j, k, t, count;
    string ch;
    sf("%d", &t);
    getchar();
    for(i=1; i<=t; i++) {
        count = 0;
        getline(cin, ch);
        for(j=0; ch[j]; j++) {
            if(ch[j]=='a') {
                count++;
            }else if(ch[j]=='b') {
                count+=2;
            }else if(ch[j]=='c') {
                count+=3;
            }else if(ch[j]=='d') {
                count++;
            }else if(ch[j]=='e') {
                count+=2;
            }else if(ch[j]=='f') {
                count+=3;
            }else if(ch[j]=='g') {
                count++;
            }else if(ch[j]=='h') {
                count+=2;
            }else if(ch[j]=='i') {
                count+=3;
            }else if(ch[j]=='j') {
                count++;
            }else if(ch[j]=='k') {
                count+=2;
            }else if(ch[j]=='l') {
                count+=3;
            }else if(ch[j]=='m') {
                count++;
            }else if(ch[j]=='n') {
                count+=2;
            }else if(ch[j]=='o') {
                count+=3;
            }else if(ch[j]=='p') {
                count++;
            }else if(ch[j]=='q') {
                count+=2;
            }else if(ch[j]=='r') {
                count+=3;
            }else if(ch[j]=='s') {
                count+=4;
            }else if(ch[j]=='t') {
                count++;
            }else if(ch[j]=='u') {
                count+=2;
            }else if(ch[j]=='v') {
                count+=3;
            }else if(ch[j]=='w') {
                count++;
            }else if(ch[j]=='x') {
                count+=2;
            }else if(ch[j]=='y') {
                count+=3;
            }else if(ch[j]=='z') {
                count+=4;
            }else if(ch[j]==' ') {
                count++;
            }
        }
        pf("Case #%d: %d\n", i, count);
    }
}
