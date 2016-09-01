#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    string s;
    int i, j, k, t, a[26], highest;
    scanf("%d", &t);
    getchar();
    for(i=0; i<t; i++) {
        getline(cin, s);
        for(j=0; j<26; j++) {
            a[j] = 0;
        }
        for(j=0; s[j]; j++) {
            if(s[j]=='A' || s[j]=='a') {
                a[0]++;
            }else if(s[j]=='B' || s[j]=='b') {
                a[1]++;
            }else if(s[j]=='C' || s[j]=='c') {
                a[2]++;
            }else if(s[j]=='D' || s[j]=='d') {
                a[3]++;
            }else if(s[j]=='E' || s[j]=='e') {
                a[4]++;
            }else if(s[j]=='F' || s[j]=='f') {
                a[5]++;
            }else if(s[j]=='G' || s[j]=='g') {
                a[6]++;
            }else if(s[j]=='H' || s[j]=='h') {
                a[7]++;
            }else if(s[j]=='I' || s[j]=='i') {
                a[8]++;
            }else if(s[j]=='J' || s[j]=='j') {
                a[9]++;
            }else if(s[j]=='K' || s[j]=='k') {
                a[10]++;
            }else if(s[j]=='L' || s[j]=='l') {
                a[11]++;
            }else if(s[j]=='M' || s[j]=='m') {
                a[12]++;
            }else if(s[j]=='N' || s[j]=='n') {
                a[13]++;
            }else if(s[j]=='O' || s[j]=='o') {
                a[14]++;
            }else if(s[j]=='P' || s[j]=='p') {
                a[15]++;
            }else if(s[j]=='Q' || s[j]=='q') {
                a[16]++;
            }else if(s[j]=='R' || s[j]=='r') {
                a[17]++;
            }else if(s[j]=='S' || s[j]=='s') {
                a[18]++;
            }else if(s[j]=='T' || s[j]=='t') {
                a[19]++;
            }else if(s[j]=='U' || s[j]=='u') {
                a[20]++;
            }else if(s[j]=='V' || s[j]=='v') {
                a[21]++;
            }else if(s[j]=='W' || s[j]=='w') {
                a[22]++;
            }else if(s[j]=='X' || s[j]=='x') {
                a[23]++;
            }else if(s[j]=='Y' || s[j]=='y') {
                a[24]++;
            }else if(s[j]=='Z' || s[j]=='z') {
                a[25]++;
            }
        }
        highest = 0;
        for(j=0; j<26; j++) {
            if(a[j]>highest) {
                highest = a[j];
            }
        }
        for(j=0; j<26; j++) {
            if(a[j]==highest) {
                printf("%c", 97+j);
            }
        }
        printf("\n");
    }
}
