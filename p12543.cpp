#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    int i, j, longest = 0;
    char ch1[100], ch2[100], ch3[100];
    while(scanf("%s", &ch1)!=EOF) {
        if(strcmp(ch1, "E-N-D")==0) {
            break;
        }
        j = 0;
        for(i=0; ch1[i]; i++) {
            if((ch1[i]>=65 && ch1[i]<=90) || (ch1[i]>=97 && ch1[i]<=122) || ch1[i]=='-') {
                ch2[j++] = ch1[i];
            }
        }
        ch2[j] = '\0';
        if(j>longest) {
            longest = j;
            strcpy(ch3, ch2);
        }
    }
    for(i=0; ch3[i]; i++) {
        if(ch3[i]>=65 && ch3[i]<=90) {
            ch3[i] = ch3[i]+32;
        }
    }
    printf("%s\n", ch3);
}
