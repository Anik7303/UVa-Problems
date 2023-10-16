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

int ct;

struct NODE {
    bool visited;
    int starttime, endtime, id;
    vi edge;
};

bool _compare(NODE a, NODE b) {
    return a.endtime>b.endtime;
}

void dfs(vector<NODE>&graph, int source) {
    int i, n, x;
    graph[source].visited = true;
    graph[source].starttime = ct++;
    n = graph[source].edge.size();
    for(i=0; i<n; i++) {
        x = graph[source].edge[i];
        if(!graph[x].visited) {
            graph[x].visited = true;
            graph[x].starttime = ct++;
            dfs(graph, x);
        }
    }
    graph[source].endtime = ct++;
    return ;
}

void topological_sort(vector<NODE>&graph) {
    int i, n;
    ct = 0;
    n = graph.size();
    for(i=0; i<n; i++) {
        if(!graph[i].visited) {
            dfs(graph, i);
        }
    }
    sort(graph.begin(), graph.end(), _compare);
    return ;
}

int main()
{
    //fr("p10305.txt");
    int i, j, m, n, x, y;
    NODE temp;
    vector<NODE> graph;
    while(scii(n, m)==2 && (n||m)) {
        for(i=0; i<=n; i++) {
            temp.visited = false;
            temp.id = i;
            pb(graph, temp);
        }
        for(i=0; i<m; i++) {
            scii(x, y);
            pb(graph[x].edge, y);
        }
        topological_sort(graph);
        for(i=0; i<n; i++) {
            if(i>0) pfsp();
            printf("%d", graph[i].id);
        }
        pfn();
        acl(graph);
    }
}
