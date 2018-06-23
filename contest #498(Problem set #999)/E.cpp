#include<bits/stdc++.h>
using namespace std;

const int N = 5010;
int cnt,n;
vector<int> adj[N];
bool visited[N];
bool used[N];


void dfs1(int capital) {
    // cout << capital << " ";
    visited[capital] = true;
    for (auto it : adj[capital] ) {
        if (!visited[it]) dfs1(it);
    }
    // cout << endl;
}

void dfs2(int i) {

    used[i] = true;
    cnt++;
    for (auto it : adj[i]) {
        if (!visited[it] && !used[it]) {
            dfs2(it);
        }
    }
}
int main()
{
    int m,s,roads,sor,dest;
    cin >> n >> m >> s;
    
    // memset(adj,false,n*n*sizeof(bool));
    for (int i=0;i<m;i++) {
        cin >> sor >> dest;
        adj[sor-1].push_back(dest-1);
    }
    // for (auto it : adj[s-1]) cout << it << " ";
    // cout << endl;
    vector<pair<int, int> > track;
    dfs1(s-1);
    // for (int i=0;i<n;i++) cout << visited[i] << " ";
    // return 0;
    // cout << endl;
    for (int i=0;i<n;i++) {
        if (!visited[i]) {
            cnt = 0;
            memset(used,false,n*sizeof(bool));
            dfs2(i);
            track.push_back(make_pair(cnt,i));
        }

    }
    sort(track.begin(),track.end());
    reverse(track.begin(),track.end());
    roads = 0;
    for (auto iter : track) {
        if (!visited[iter.second]) {
            dfs1(iter.second);
            roads++;
        }
    }
    // cout << "secondf" << endl;
    cout << roads << endl;
    return 0;
}