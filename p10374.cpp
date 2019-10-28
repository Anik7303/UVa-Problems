#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    // Uva Problem 10374 - Election
    //freopen("p10374.txt", "r", stdin);
    int i, j, m, n, t;
    int max_count;
    string str_name, str_party, str_vote;
    map<string, string> name_to_party;
    map<string, int> vote_count;
    map<string, int>::iterator it;
    scanf("%d", &t);
    for(i = 0; i < t; i++) {
        if(i>0) printf("\n");
        name_to_party.clear();
        vote_count.clear();
        scanf("%d ", &n);
        for(j = 0; j < n; j++) {
            getline(cin, str_name);
            getline(cin, str_party);
            name_to_party[str_name] = str_party;
        }
        scanf("%d ", &m);
        max_count = 0;
        for(j = 0; j < m; j++) {
            getline(cin, str_vote);
            if(name_to_party.find(str_vote) != name_to_party.end()) {
                vote_count[str_vote]++;
                if(vote_count[str_vote] > max_count) max_count = vote_count[str_vote];
            }
        }
        int lm = vote_count.size();
        string winner = "";
        int winner_count = 0;
        for(map<string, int>::iterator it = vote_count.begin(); it != vote_count.end(); ++it) {
            if(max_count != 0 && it->second == max_count) {
                winner = name_to_party[it->first];
                winner_count++;
            }
        }
        if(winner_count != 1) {
            printf("tie\n");
        } else {
            cout << winner << endl;
        }
    }
    return 0;
}

