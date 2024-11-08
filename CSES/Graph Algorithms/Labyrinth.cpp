#include<bits/stdc++.h>
using namespace std;
 
//Define start and end marco
#define BISMILLAH ios_base::sync_with_stdio(0);cin.tie(0);
#define ALHAMDULILLAH return 0
#define ll long long
#define pb push_back
#define nl '\n'
 
const int N = 1005, inf = 1e9;
int n, m;
string s[N];
int dist[N][N];
pair<int,int> par[N][N];
 
// directional array
int dx[] = {0, -1, 0, +1, -1, -1, +1, +1};
int dy[] = {+1, 0, -1, 0, +1, -1, -1, +1};
 
bool is_valid(int i, int j) {
    return i >= 0 and i < n and j >= 0 and j < m;
}
 
int32_t main() {
 
    BISMILLAH
        
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    } 
 
    pair<int,int>start, end;
 
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m ; j++) {
            if(s[i][j] == 'A') {
                start = make_pair(i, j);
            }
            if(s[i][j] == 'B') {
                end = make_pair(i, j);
            }
        }
    }
 
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            dist[i][j] = inf;
        }
    }
    
    queue<pair<int,int>> q;
    q.push(start);
    auto [x, y] = start;
    dist[x][y] = 0;
 
    while(!q.empty()) {
        auto [i, j] = q.front();
        q.pop();
        for(int k = 0; k < 4; k++) {
            int ii = i + dx[k];
            int jj = j + dy[k];
            if(is_valid(ii, jj) and s[ii][jj] != '#' and dist[i][j] + 1 < dist[ii][jj]) {
                dist[ii][jj] = dist[i][j] + 1;
                par[ii][jj] = make_pair(i, j);
                q.push(make_pair(ii, jj));
            }
        }
    }    
 
    auto [c, d] = end;
    int ans = dist[c][d]; 
 
    if(dist[c][d] == inf) {
        cout << "NO" << nl;
    }  
    else {
        cout << "YES" << nl;
        cout << ans << nl;
        vector<pair<int,int>> path;
        auto cur = end;
        while(cur != start) {
            path.push_back(cur);
            auto [x, y] = cur;
            cur = par[x][y];
        }
 
        path.push_back(start);
        reverse(path.begin(), path.end());
 
        for(int k = 0; k + 1 < path.size(); k++) {
            int di = path[k].first - path[k + 1].first;
            int dj = path[k].second - path[k + 1].second;
            // cout << path[k].first << " " << path[k + 1].first << nl;
            // cout << path[k].second << " " << path[k + 1].second << nl;
            // cout << di << " " << dj << nl;
 
            if(di == +1) {
                cout << 'U';
            }
            else if(di == -1) {
                cout << 'D';
            }
            else if(dj == +1) {
                cout << 'L';
            }
            else if(dj == -1) {
                cout << 'R';
            }
        }
        cout << nl;
    }
 
 
 
    ALHAMDULILLAH;
}
