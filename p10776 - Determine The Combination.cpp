#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
#define N 1000
int r, len, point;
char str[N+5];
char ans[N+5];
bool vis[N+5];

void backtrack(int taken) {
    if(taken==r) {
        ans[taken]='\0';
		printf("%s\n", ans);
        return ;
    }
    char prv = 0;
    for(int i=point; i<len; i++) {
        if(vis[i]==0 && str[i]!=prv) {
            ans[taken] = str[i];
            vis[i] = 1;
            point = i+1;
            backtrack(taken+1);
            vis[i] = 0;
            prv = str[i];
        }
    }
    return ;
}

int main()
{
    //freopen("input.txt", "r", stdin);
    int i, j, n;
    while(scanf("%s %d", &str, &r)==2) {
        getchar();
        for(len=0; str[len]; len++);
        sort(str, str+len);
        point = 0;
        backtrack(0);
    }
}
