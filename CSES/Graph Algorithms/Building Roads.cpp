#include<bits/stdc++.h>
using namespace std;
 
//Define start and end marco
#define BISMILLAH ios_base::sync_with_stdio(0);cin.tie(0);
#define ALHAMDULILLAH return 0
#define ll long long
#define pb push_back
#define nl '\n'
 
const int N = 1e5 + 9;
 
vector<int> g[N];
bool vis[N];
 
void dfs(int u) {
	vis[u] = true;
	for(int v: g[u]){
		if(!vis[v]) {
			dfs(v);
		}
	}
}
int32_t main()
{
	BISMILLAH
		
	int n, m; 
	cin >> n >> m;
 
	while(m--) {
		int u, v; cin >> u >>v;
		g[u].pb(v);
		g[v].pb(u);
	} 
 
	vector<int>ans;
 
	for(int i = 1; i <= n; i++) {
		if(!vis[i]) {
			ans.pb(i);
			dfs(i);
		}
	}
 
	cout << (int)ans.size() - 1 << nl;
	for(int i = 1; i < (int)ans.size(); i++) {
		cout << ans[i-1] << " " << ans[i] << nl;
	}		    
	ALHAMDULILLAH;
}
