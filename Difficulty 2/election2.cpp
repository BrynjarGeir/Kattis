#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int n, m;
    string line, name, party;
    map<string, pair<string, int>> votes;
    getline(cin, line);

    n = stoi(line);

    for(int i = 0; i < n; i++) {
        getline(cin, line);
        name = line;
        getline(cin, line);
        party = line;
        votes[name] = make_pair(party, 0);
    }

    getline(cin, line);
    m = stoi(line);
    for (int i = 0; i < m; i++) {
        getline(cin, name);
        if(votes.find(name) == votes.end()) continue;
        votes[name].second++;
    }

    vector<tuple<int, string, string>> v;
    map<string, pair<string, int>>::iterator it;

    for(it = votes.begin(); it != votes.end(); it++) {
        int vote = it->second.second;
        party = it->second.first;
        name = it->first;
        tuple<int, string, string> p = make_tuple(vote, name, party);
        v.push_back(p);
    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    
    if (v.size() == 1 || get<0>(v[0]) != get<0>(v[1])) cout << get<2>(v[0]);
    else cout << "tie";
}