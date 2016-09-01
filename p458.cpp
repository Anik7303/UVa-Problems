#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int i;
    string ch;
    while(getline(cin, ch)) {
        for(i=0; ch[i]; i++) {
            printf("%c", ch[i]-7);
        }
        printf("\n");
    }
}
