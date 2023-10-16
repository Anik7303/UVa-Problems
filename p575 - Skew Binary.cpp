#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
using namespace std;

typedef long long int ll;

ll power(ll x, ll y) {
    ll i, res;
    res = 1;
    for(i=0; i<y; i++) {
        res = res * x;
    }
    return res;
}

int main()
{
    //freopen("p575.txt", "r", stdin);
    ll i, j, n, x, y;
    string s;
    while(getline(cin, s) && s!="0") {
        n = 0;
        j = 1;
        for(i=s.size()-1; i>=0; i--, j++) {
            x = power(2, j) - 1;
            y = s[i]-48;
            n = n + y*x;
        }
        printf("%lld\n", n);
    }
}
