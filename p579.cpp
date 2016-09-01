#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main()
{
    string s;
    char ch[10];
    int H, M, i, j;
    float result;
    while(getline(cin, s)) {
        for(i=0, j=0; s[i]; i++) {
            if(s[i]==':') {
                ch[j] = '\0';
                H = atoi(ch);
                j = 0;
            }else {
                ch[j++] = s[i];
            }
        }
        ch[j] = '\0';
        M = atoi(ch);
        if(H==0 && M ==0) {
            break;
        }
        result = ((60*H)-(11*M))*0.5;
        if(result<0) {
            result*=-1;
        }
        if(result>180) {
            result = 360 - result;
        }
        printf("%0.3f\n", result);
    }
}
