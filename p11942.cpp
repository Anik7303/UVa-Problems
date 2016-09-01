#include <iostream>
#include <cstdio>
using namespace std;

#define sf scanf
#define pf printf

int main()
{
    int a[10], i, j, t, flag;
    sf("%d", &t);
    for(i=0; i<t; i++) {
        for(j=0; j<10; j++) {
            sf("%d", &a[j]);
        }
        flag = 0;
        if(a[0]>a[9]) {
            for(j=0; j<9; j++) {
                if(a[j]<a[j+1]) {
                    flag = 1;
                    break;
                }
            }
        }else if(a[0]<a[9]) {
            for(j=0; j<9; j++) {
                if(a[j]>a[j+1]) {
                    flag = 1;
                    break;
                }
            }
        }
        if(i==0) {
            pf("Lumberjacks:\n");
        }
        if(flag==1) {
            pf("Unordered\n");
        }else {
            pf("Ordered\n");
        }
    }
}
