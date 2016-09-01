#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    int n, i, j, len1, len2, flag;
    char ch1[21], ch2[21];
    scanf("%d", &n);
    getchar();
    for(i=0; i<n; i++) {
        gets(ch1);
        len1 = strlen(ch1);
        gets(ch2);
        len2 = strlen(ch2);
        if(len1!=len2) {
            printf("No\n");
        }else {
            flag = 0;
            for(j=0; ch1[j]; j++) {
                if(ch1[j]!=ch2[j]) {
                    if((ch1[j]!='a' && ch1[j]!='e' && ch1[j]!='i' && ch1[j]!='o' && ch1[j]!='u') || (ch2[j]!='a' && ch2[j]!='e' && ch2[j]!='i' && ch2[j]!='o' && ch2[j]!='u')){
                        flag = 1;
                        break;
                    }
                }
            }
            if(flag==0) {
                printf("Yes\n");
            }else {
                printf("No\n");
            }
        }
    }
}
