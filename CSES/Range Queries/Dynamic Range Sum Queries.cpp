#include<bits/stdc++.h>
using namespace std;
 
//Define start and end marco
#define BISMILLAH ios_base::sync_with_stdio(0);cin.tie(0);
#define ALHAMDULILLAH return 0
#define ll long long
#define pb push_back
#define nl '\n'
 
const int N = 2e5+9;
int a[N];
ll t[N * 4];
 
void build(int node, int b,int e) {
	if(b == e) {
		t[node] = a[b];
		return;
	}
	int l = 2 * node, r = 2 * node + 1;
	int mid = (b + e) / 2;
 
	build(l, b, mid);
	build(r, mid + 1, e);
 
	t[node] = t[l] + t[r];
}
 
ll query(int node, int b, int e, int i, int j) {
	if(b > j or e < i) return 0;
 
	if(b >= i and e <= j) {
		return t[node];
	}
	int l = 2 * node, r = 2 * node + 1;
	int mid = (b + e) / 2;
 
	return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}
 
void update(int node, int b, int e, int i, int x) {
	if(b > i or e < i) return;
	if(b == e and b == i) {
		t[node] = x;
		return;
	}
	int l = 2 * node, r = 2 * node + 1;
	int mid = (b + e) / 2;
 
	update(l, b, mid, i, x);
	update(r, mid+1, e, i, x);
	t[node] = t[l] + t[r];
 
}
 
int32_t main()
{
	BISMILLAH
 
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++) cin >> a[i];
	build(1, 1, n);
 
	while(m--) {
		int type; cin >> type;
		if(type == 1) {
			int i,  v;
			cin >> i >> v;
			//i++;
			update(1, 1, n, i, v);
		}
		else if(type == 2) {
			int l, r;
			cin >> l >>r;
			cout << query(1, 1, n, l, r) <<nl;
		}
	}
	    
	ALHAMDULILLAH;
}
