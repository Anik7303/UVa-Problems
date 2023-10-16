#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <map>
#include <queue>
using namespace std;

#define IMAX 1000000

struct node {
    bool visited;
    int mx;
    string name;
    vector<int> edge;
    vector<int> value;
};

void bfs(vector<node>&graph, int source) {
    queue<int>q;
    int top, i, x, n, d;
    graph[source].visited = true;
    q.push(source);
    while(!q.empty()) {
        top = q.front();
        q.pop();
        n = graph[top].edge.size();
        for(i=0; i<n; i++) {
            x = graph[top].edge[i];
            d = min(graph[top].value[i], graph[top].mx);
            if(!graph[x].visited) {
                graph[x].visited = true;
                graph[x].mx = d;
                q.push(x);
            }
            graph[x].mx = max(graph[x].mx, d);
        }
    }
    return ;
}

int main()
{
    //freopen("p544.txt", "r", stdin);
    int i, j, n, r, d, x, ct, src, dis;
    char ch1[100], ch2[100];
    string a, b;
    map<string, int>_map;
    node temp;
    vector<node> gr;
    ct = 0;
    while(scanf("%d %d", &n, &r)==2 && (n||r)) {
        getchar();
        gr.clear();
        _map.clear();
        temp.visited = false;
        temp.mx = IMAX;
        for(i=0; i<=n; i++) {
            gr.push_back(temp);
        }
        x = 1;
        //printf("roads\n");
        for(i=0; i<r; i++) {
            //printf("i: %d\n", i);
            scanf("%s %s %d", ch1, ch2, &d);
            getchar();
            a = (string)ch1;
            b = (string)ch2;
            if(!_map[a]) {
                _map[a] = x++;
                //gr[_map[a]].name = a;
            }
            if(!_map[b]) {
                _map[b] = x++;
                //gr[_map[b]].name = b;
            }
            //printf("%s[%d] %s[%d]\n", a.c_str(), _map[a], b.c_str(), _map[b]);
            gr[_map[a]].edge.push_back(_map[b]);
            gr[_map[a]].value.push_back(d);
            gr[_map[b]].edge.push_back(_map[a]);
            gr[_map[b]].value.push_back(d);
        }
        //printf("source and destination\n");
        scanf("%s %s", ch1, ch2);
        a = (string) ch1;
        b = (string) ch2;
        src = _map[a];
        dis = _map[b];
        bfs(gr, src);
        printf("Scenario #%d\n", ++ct);
        printf("%d tons\n", gr[dis].mx);
        printf("\n");
        //printf("%d\n", gr[dis].mx);
        /*
        for(i=0; i<=n; i++) {
            printf("graph[%d]:", i);
            for(j=0; j<gr[i].edge.size(); j++) {
                printf(" %d", gr[i].edge[j]);
            }
            printf(" mx: %d [%s]\n", gr[i].mx, gr[i].name.c_str());
        }
        */
    }
}
