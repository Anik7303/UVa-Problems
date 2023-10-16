#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <list>
#include <map>
using namespace std;

typedef long long int ll;
typedef int _i;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;
typedef map<int, int> mii;
typedef map<int, string> mis;
typedef map<string, int> msi;
typedef pair<int, int> pii;
typedef pair<int, string> pis;
typedef pair<string, int> psi;

#define IMAX 2147483647
#define IMIN -2147483646
#define fr(x) freopen(x, "r", stdin)
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
#define set(x, y) memset(x, y, sizeof(x))
#define pcase(x) printf("Case %d: ", x)
#define lp(a, x, n, y) for(a=x; a<n; a+=y)
#define lpe(a, x, n, y) for(a=x; a<=n; a+=y)
#define sln(x) x.size()
#define acl(x) x.clear()

#define MAX 100000

int main()
{
    //fr("p11988.txt");
    int i, n, j, k, sz, flag, h_index;
    char ch[MAX+2], mch[MAX+2], temp[MAX+2];
    string str;
    stack<string> beiju;
    while(scs(str)) {
        //pfsn(str);
        flag = 0;
        j = 0, k = 0, h_index = 0;
        for(i=0; i<str.size(); i++) {
            //printf("i:%d j:%d k:%d\n", i, j, k);
            if(str[i]=='[' && flag == 1) {
                temp[k] = '\0';
                k = 0;
                beiju.push((string)temp);
                //pfcsn(temp);
                //if(temp=="") printf("empty\n");
            }else if(str[i]=='[') {
                flag = 1;
                h_index = j;
            }else if(str[i]==']') {
                flag = 0;
                temp[k] = '\0';
                k = 0;
                beiju.push((string)temp);
                //pfcsn(temp);
                //if(temp=="") printf("empty\n");
                //pfcsn("push");
            }else if(flag==1) {
                temp[k++] = str[i];
                //pfc('*');
                //pfcn(temp[k-1]);
            }else if(flag==0) {
                ch[j++] = str[i];
                //pfc(ch[j-1]);
            }
            //printf("\ti:%d j:%d k:%d\n", i, j, k);
        }
        ch[j]='\0';
        if(flag==1) {
            flag = 0;
            temp[k] = '\0';
            beiju.push((string)temp);
            //if(temp=="") printf("empty\n");
        }
        //pfcsn("\nStack:");
        while(!beiju.empty()) {
            pfs(beiju.top());
            beiju.pop();
        }
        //pfcsn(ch);
        sz = j;
        for(int i=0; i<sz; i++) {
            pfc(ch[i]);
        }
        pfn();
    }
}
