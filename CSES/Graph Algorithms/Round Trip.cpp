#include<bits/stdc++.h>
using namespace std;
 
//Define start and end marco
#define BISMILLAH ios_base::sync_with_stdio(0);cin.tie(0);
#define ALHAMDULILLAH return 0
#define ll long long
#define pb push_back
#define nl '\n'
 
const int N = 2e5 + 9;
vector<int>g[N];
bool vis[N];
int dist[N], par[N];
 
int32_t main()
{
    BISMILLAH
        
    int n, m; cin >> n >> m;
    for(int i = 1; i <= m; i++) {
        int u, v; 
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
       
    dist[1] = 0;
    vis[1] = true;
    queue<int> q;
    q.push(1);
 
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        for(auto v: g[u]) {
            if(!vis[v]) {
                q.push(v);
                par[v] = u;
                vis[v] = true;
                dist[v] = dist[u] + 1;   
            }
        }
    }
 
    vector<int>ans;
    int v = n;
    while(v != 1) {
        ans.push_back(v);
        if(par[v] == 0) {
            cout << "IMPOSSIBLE" << nl;
            return 0;
        }
        else v = par[v];
    }
    ans.push_back(1);
    reverse(ans.begin(), ans.end());
 
    cout << (int)ans.size() << nl;
    for(auto x: ans) cout << x << " ";
    cout << nl;
 
    ALHAMDULILLAH;
}
