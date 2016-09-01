#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

#define sf scanf
#define pf printf

int main()
{
    double a[4][4], p, q;
    int x, y, i, j, flag, b[2];
    while(sf("%lf %lf %lf %lf %lf %lf %lf %lf", &a[0][0], &a[0][1], &a[1][0], &a[1][1], &a[2][0], &a[2][1], &a[3][0], &a[3][1])==8) {
        flag = 0;
        for(i=0; i<4; i++) {
            for(j=0; j<4; j++) {
                if(a[i][0]==a[j][0] && a[i][1]==a[j][1] && j!=i) {
                    x = i;
                    y = j;
                    flag = 1;
                    break;
                }
            }
            if(flag==1) {
                break;
            }
        }
        j = 0;
        for(i=0; i<4; i++) {
            if(i!=x && i!=y) {
                b[j++] = i;
            }
        }
        p = a[b[0]][0] + a[b[1]][0] - a[x][0];
        q = a[b[0]][1] + a[b[1]][1] - a[x][1];
        pf("%0.3lf %0.3lf\n", p, q);
    }
}
