#include <iostream>
#include <cstdio>
#include <cstdlib>
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
#include <sstream>
#include <fstream>
using namespace std;

typedef long long int ll;
typedef int _i;
typedef vector<int> vi;
typedef vector<long long int> vll;
typedef vector<char> vc;
typedef vector<string> vs;
typedef priority_queue<int> pqi;
typedef priority_queue<long long int> pql;
typedef priority_queue<string> pqs;
typedef map<int, int> mii;
typedef map<long long int, long long int> mll;
typedef map<int, string> mis;
typedef map<long long int, string> mls;
typedef map<int, char> mic;
typedef map<char, int> mci;
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
typedef deque<int> di;
typedef deque<ll> dl;
typedef deque<char> dc;
typedef deque<string> ds;

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

template<class T> T maxT(T a, T b) {return a>b ? a: b;}
template<class T> T gcd(T a,T b) {return a==0 ? b : gcd(b % a, a);}
template<class T> T power(T x, T y) {T a,i; a=1; for(i=0; i<y; i++) a*=x; return a;}

#define N 30
#define M 130
char ch[N+2];
int sz;

struct node {
    bool endpoint;
    int repeat;
    node *next[M+2];
    node() {
        endpoint = false;
        repeat = 0;
        for(int i=0; i<M; i++) next[i] = NULL;
    }
    void insertstr(string s);
    bool checkstr(string s);
    void clearall(node *current);
    void printall(node *current, char *ch, int idx);
    int total(node *current, int ct);
}*root;

void node::insertstr(string s) {
    int n = s.size();
    node *current = root;
    for(int i=0; i<n; i++) {
        int x = s[i];
        if(current->next[x]==NULL) {
            current->next[x] = new node();
        }
        current = current->next[x];
    }
    current->endpoint = true;
    current->repeat = current->repeat + 1;
    return ;
}

bool node::checkstr(string s) {
    int n = s.size();
    node *current = root;
    for(int i=0; i<n; i++) {
        int x = s[i];
        if(current->next[x]==NULL) {
            return false;
        }
        current = current->next[x];
    }
    return current->endpoint;
}

void node::clearall(node *current) {
    for(int i=0; i<M; i++) {
        if(current->next[i]!=NULL) {
            clearall(current->next[i]);
        }
    }
    delete(current);
    return ;
}

void node::printall(node *current, char *ch, int idx) {
    for(int i=0; i<M; i++) {
        if(current->next[i]) {
            ch[idx] = (char) i;
            printall(current->next[i], ch, idx+1);
        }
    }
    if(current->endpoint) {
        ch[idx] = '\0';
        printf("%s %0.4lf\n", ch, (current->repeat*100.00)/sz);
    }
    return ;
}

int node::total(node *current, int ct) {
    for(int i=0; i<M; i++) {
        if(current->next[i]) {
            ct = total(current->next[i], ct);
        }
    }
    return ct+current->endpoint;
}

int main()
{
    //fr("p10226.txt");
    int i, j, k, n, t;
    string s;
    sci(t);
    gt();
    for(i=0; i<=t; i++) {
        sz = 0;
        root = new node();
        if(i>1) pfn();
        while(scs(s) && s!="") {
            root->insertstr(s);
            sz++;
        }
        if(i>0) {
            //sz = root->total(root, 0);
            root->printall(root, ch, 0);
        }
        root->clearall(root);
    }
}
