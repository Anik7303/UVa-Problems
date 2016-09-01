#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    int count = 0;
    char ch[10];
    while(gets(ch)) {
        if(strcmp(ch, "*")==0) {
            break;
        }
        count++;
        if(strcmp(ch, "Hajj")==0) {
            printf("Case %d: Hajj-e-Akbar\n", count);
        }else if(strcmp(ch, "Umrah")==0) {
            printf("Case %d: Hajj-e-Asghar\n", count);
        }
    }
}
