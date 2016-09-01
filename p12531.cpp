#include <iostream>
#include <cstdio>
using namespace std;

#define sf scanf
#define pf printf

int main()
{
    int a;
    while(sf("%d", &a)==1) {
        if(a%6==0) {
            pf("Y\n");
        }else {
            pf("N\n");
        }
    }
}
