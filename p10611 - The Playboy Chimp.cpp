#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <functional>
#include <list>
#include <map>
#include <utility>
using namespace std;

typedef long long int ll;
typedef int _i;
typedef vector<int> vi;
typedef vector<long long int> vll;
typedef vector<string> vs;
typedef priority_queue<int> pqi;
typedef priority_queue<long long int> pql;
typedef priority_queue<string> pqs;
typedef map<int, int> mii;
typedef map<long long int, long long int> mll;
typedef map<int, string> mis;
typedef map<long long int, string> mls;
typedef map<string, int> msi;
typedef map<string, long long int> msl;
typedef pair<int, int> pii;
typedef pair<long long int, long long int> pll;
typedef pair<int, string> pis;
typedef pair<string, int> psi;
typedef pair<long long int, string> pls;
typedef pair<string, long long int> psl;
typedef queue<int> qi;
typedef queue<long long int> ql;
typedef queue<string> qs;

#define IMAX 2147483647
#define IMIN -2147483646
#define fr(x) freopen(x, "r", stdin)
#define fo(x) freopen(x, "w", stdout)
#define pfi(x) printf("%d", x)
#define pfin(x) printf("%d\n", x)
#define pfl(x) printf("%lld", x)
#define pfln(x) printf("%lld\n", x)
#define pff(x) printf("%f", x)
#define pffn(x) printf("%f\n", x)
#define pfd(x) printf("%lf", x)
#define pfdn(x) printf("%lf\n", x)
#define pfc(x) printf("%c", x)
#define pfcn(x) printf("%c\n", x)
#define pfcs(x) printf("%s", x)
#define pfcsn(x) printf("%s\n", x)
#define pfs(x) printf("%s", x.c_str())
#define pfsn(x) printf("%s\n", x.c_str())
#define pfn() printf("\n")
#define pfsp() printf(" ")
#define sci(x) scanf("%d", &x)
#define scii(x, y) scanf("%d %d", &x, &y)
#define scl(x) scanf("%lld", &x)
#define scll(x, y) scanf("%lld %lld", &x, &y)
#define sclll(x, y, z) scanf("%lld %lld %lld", &x, &y, &z)
#define scf(x) scanf("%f", &x)
#define scff(x, y) scanf("%f %f", &x, &y)
#define scd(x) scanf("%lf", &x)
#define scdd(x, y) scanf("%lf %lf", &x, &y)
#define scc(x) scanf(" %c", &x)
#define sccs(x) scanf("%s", x)
#define scss(x, y) scanf("%s %s", x, y)
#define scs(x) getline(cin, x)
#define gt() getchar()
#define pb(x, y) x.push_back(y)
#define pu(x, y) x.push(y)
#define mp(a, b) make_pair(a, b)
#define mset(x, y) memset(x, y, sizeof(x))
#define pcase(x) printf("Case %d: ", x)
#define lp(a, x, n, y) for(a=x; a<n; a+=y)
#define lpe(a, x, n, y) for(a=x; a<=n; a+=y)
#define sln(x) x.size()
#define acl(x) x.clear()
#define qcl(x) {while(!x.empty()) x.pop(); }
#define N 50000
int arr[N+2];

int bsearchup(int n, int value) {
    int high, low, mid, index;
    index = -1;
    low = 0;
    high = n - 1;
    while(low<=high) {
        mid = (low+high) / 2;
        if(value>arr[mid]) {
            low = mid + 1;
            index = mid;
        }else if(value<arr[mid]) {
            high = mid - 1;
        }else {
            index = mid;
            low = mid + 1;
        }
    }
    return index;
}


int bsearchdown(int n, int value) {
    int high, low, mid, index;
    index = -1;
    low = 0;
    high = n - 1;
    while(low<=high) {
        mid = (low+high) / 2;
        if(value>arr[mid]) {
            low = mid + 1;
        }else if(value<arr[mid]) {
            high = mid - 1;
            index = mid;
        }else {
            index = mid;
            high = mid - 1;
        }
    }
    return index;
}

int main()
{
    int i, j, k, n, q, x, high, low;
    sci(n);
    for(i=0; i<n; i++) sci(arr[i]);
    sci(q);
    for(i=0; i<q; i++) {
        sci(x);
        if(x>=arr[0] && x<=arr[n-1]) {
            high = bsearchup(n, x)+1;
            low = bsearchdown(n, x)-1;
            //printf("high: %d low: %d\n", high, low);
            low>=0 ? pfi(arr[low]) : pfc('X');
            pfsp();
            high<n ? pfi(arr[high]) : pfc('X');
        }else if(x<arr[0]){
            pfc('X');
            pfsp();
            pfi(arr[0]);
        }else {
            pfi(arr[n-1]);
            pfsp();
            pfc('X');
        }
        pfn();
    }
}
