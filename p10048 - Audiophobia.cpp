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
#define N 1000
int arr[N+2];

struct NODE {
    int visited;
    vector<pii>edge;
};

void dfs_visit(vector<NODE>&graph, int source, int weight) {
    int i, x, w, n;
    n = graph[source].edge.size();
    for(i=0; i<n; i++) {
        x = graph[source].edge[i].first;
        w = graph[source].edge[i].second;
        if(graph[x].visited==0 && w<=weight) {
            graph[x].visited = 1;
            dfs_visit(graph, x, weight);
        }
    }
    return ;
}

bool dfs(vector<NODE>&graph, int source, int destination, int weight) {
    int i, x, w, n;
    n =graph.size();
    for(i=0; i<n; i++) {
        graph[i].visited = 0;
    }
    graph[source].visited = 1;
    n = graph[source].edge.size();
    for(i=0; i<n; i++) {
        x = graph[source].edge[i].first;
        w = graph[source].edge[i].second;
        if(!graph[x].visited && w<=weight) {
            graph[x].visited = 1;
            dfs_visit(graph, x, weight);
        }
    }
    if(graph[destination].visited) return true;
    return false;
}

bool bfs(vector<NODE>&graph, int source, int destination, int weight) {
    int i, j, x, w, n, top;
    qi Q;
    n = graph.size();
    for(i=0; i<n; i++) graph[i].visited = 0;
    graph[source].visited = 1;
    pu(Q, source);
    while(!Q.empty()) {
        top = Q.front();
        Q.pop();
        n = graph[top].edge.size();
        for(i=0; i<n; i++) {
            x = graph[top].edge[i].first;
            w = graph[top].edge[i].second;
            if(!graph[x].visited && w<=weight) {
                pu(Q, x);
                graph[x].visited = 1;
            }
        }
    }
    return graph[destination].visited&1;
}

int calculate(vector<NODE>&graph, int source, int destination, int high) {
    int low, mid, value;
    value = low = 0;
    while(low<=high) {
        mid = (low+high)/2;
        //if(dfs(graph, source, destination, mid)) { /// finding path using DFS
        if(bfs(graph, source, destination, mid)) { /// finding path using BFS
            high = mid - 1;
            value = mid;
        }else {
            low = mid + 1;
        }
    }
    return value;
}

int binary_search_down(int value, int high) {
    int low, mid, index;
    low = 0;
    index = -1;
    while(low<=high) {
        mid = (low+high)/2;
        if(arr[mid]>value) {
            high = mid-1;
        }else {
            low = mid+1;
            index = mid;
        }
    }
    if(~index) return arr[index];
    return index;
}

int main()
{
    //fr("p10048.txt");
    int i, j, k, c, s, q, x, y, d, ct, maxd;
    NODE temp;
    vector<NODE>graph;
    ct = 0;
    while(scanf("%d %d %d", &c, &s, &q)==3 && (c || s || q)) {
        if(ct>0) pfn();
        for(i=0; i<=c; i++) {
            //temp.visited = 0;
            pb(graph, temp);
        }
        maxd = 0;
        for(i=0; i<s; i++) {
            scii(x, y);
            sci(d);
            arr[i] = d;
            maxd = max(maxd, d);
            pb(graph[x].edge, mp(y, d));
            pb(graph[y].edge, mp(x, d));
        }
        /*
        for(i=0; i<=c; i++) {
            printf("Graph[%d]:\n", i);
            for(j=0; j<graph[i].edge.size(); j++) {
                printf("%d -> %d: weight: %d\n", i, graph[i].edge[j].first, graph[i].edge[j].second);
            }
        }
        */
        sort(arr, arr+s);
        /*
        pfcs("edges:");
        for(i=0; i<s; i++) {
            pfsp();
            pfi(arr[i]);
        }
        pfn();
        */
        printf("Case #%d\n", ++ct);
        for(i=0; i<q; i++) {
            scii(x, y);
            //printf("source: %d destination: %d edges: %d\n", x, y, s);
            int res = calculate(graph, x, y, maxd);
            //printf("calculated value: %d ", res);
            res = binary_search_down(res, s-1);
            //printf("result: %d\n", res);
            if(~res) pfin(res);
            else pfcsn("no path");
        }
        acl(graph);
    }
}
