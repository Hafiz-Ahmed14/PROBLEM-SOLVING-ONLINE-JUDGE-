#include<bits/stdc++.h>
using namespace std;
 
//Define start and end marco
#define BISMILLAH ios_base::sync_with_stdio(0);cin.tie(0);
#define ALHAMDULILLAH return 0
#define ll long long
#define pb push_back
#define nl '\n'
 
const int N = 1e5 + 9;
vector<int>g[N];
int col[N], par[N];
bool cycle;
vector<int>path;
// cycle dfs
void dfs(int u) {
 if(cycle) return;
 col[u] = 1;
 for(auto v: g[u]) {
    if(cycle) return;
     if(col[v] == 0) {
        par[v] = u;
        dfs(v);
    }
     else if(col[v] == 1) {
         cycle = true;
         int st = u;
         while(u != v) {
                path.push_back(u);
                u = par[u];
        }
            path.push_back(v);
            path.push_back(st);
            reverse(path.begin(), path.end());
            return;
     }
 }
 col[u] = 2;
}
 
int32_t main()
{
    BISMILLAH
      
    int n, m; 
    cin >> n >> m;
    for(int i = 1; i <= m; i++) {
        int u, v; cin >> u >> v;
        g[u].push_back(v);
    } 
 
 
    cycle = false;
    for(int i = 1; i <= n; i++) {
        if(!col[i]) {
            dfs(i); 
            if(cycle) {
            cout << path.size() << nl;
            for(auto x: path) {
                cout << x << " ";
            }
            cout << nl;
            return 0;
            }
        }
        
    }
 
    cout << "IMPOSSIBLE" << nl;
            
    ALHAMDULILLAH;
}
