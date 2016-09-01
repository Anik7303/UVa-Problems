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

struct NODE {
    int visited, distance, parent;
    string name;
    vector<pii> edge;
};

int dijkstra_algorithm(vector<NODE>&graph, int source, int destination) {
    int i, j, x, y, sz, top;
    qi Q;
    pu(Q, source);
    graph[source].distance = 0;
    while(!Q.empty()) {
        top = Q.front();
        Q.pop();
        if(!graph[top].visited) {
            sz = graph[top].edge.size();
            graph[top].visited = 1;
            for(i=0; i<sz; i++) {
                x = graph[top].edge[i].first;
                y = graph[top].distance + graph[top].edge[i].second;
                if(graph[x].distance>y) {
                    graph[x].distance = y;
                    graph[x].visited = 0;
                }
                pu(Q, x);
            }
        }
        graph[top].visited = 1;
    }
    if(graph[destination].visited) return graph[destination].distance;
    else return -1;
}

int main()
{
    fr("p10986.txt");
    int i, j, n, m, s, t, x, y, w, res, cases;
    NODE temp;
    vector<NODE> graph;
    sci(cases);
    for(i=1; i<=cases; i++) {
        scii(n, m);
        scii(s, t);
        for(j=0; j<n; j++) {
            temp.distance = IMAX;
            temp.visited = 0;
            pb(graph, temp);
        }
        for(j=0; j<m; j++) {
            scii(x, y);
            sci(w);
            pb(graph[x].edge, mp(y, w));
            pb(graph[y].edge, mp(x, w));
        }

        res = dijkstra_algorithm(graph, s, t);

        printf("Case #%d: ", i);
        if(~res) pfin(res);
        else printf("unreachable\n");
        acl(graph);
    }
}
