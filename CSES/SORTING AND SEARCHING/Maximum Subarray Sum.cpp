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
		
	int n; cin >> n;
 
	vector<int> a(n);
 
	for(int i = 0; i < n; i++) cin >> a[i];
 
	ll max_sum = -1e18;
	ll temp_sum = -1e18;
 
	for(int i = 0; i < n; i++) {
		temp_sum = max((ll)a[i] , a[i] + temp_sum);
		max_sum = max(max_sum,temp_sum);
	}	   
 
	cout << max_sum << nl; 
	ALHAMDULILLAH;
}
