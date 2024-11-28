#include<bits/stdc++.h>
using namespace std;
 
//Define start and end marco
#define BISMILLAH ios_base::sync_with_stdio(0);cin.tie(0);
#define ALHAMDULILLAH return 0
#define ll long long
#define pb push_back
#define nl '\n'
 
 
 
int32_t main()
{
	BISMILLAH
		
	int n , q;
	cin >> n >> q;
 
	int a[n + 1];
	for(int i = 1; i <= n; i++) cin >> a[i];
 
	int prefix_xor[n + 1];
	prefix_xor[0] = 0;
 
	for(int i = 1; i <= n; i++) {
		prefix_xor[i] = prefix_xor[i - 1] ^ a[i];
	}
 
	while(q--) {
		int l , r;
		cin >> l >> r;
		cout << (prefix_xor[r] ^ prefix_xor[l - 1]) << nl;
	}
 
	ALHAMDULILLAH;
}
