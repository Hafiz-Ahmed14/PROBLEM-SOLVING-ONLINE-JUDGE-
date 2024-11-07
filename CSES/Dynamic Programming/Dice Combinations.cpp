#include<bits/stdc++.h>
using namespace std;
 
//Define start and end marco
#define BISMILLAH ios_base::sync_with_stdio(0);cin.tie(0);
#define ALHAMDULILLAH return 0
#define ll long long
#define pb push_back
#define nl '\n'
 
const int MOD = 1e9 + 7;
const int N = 1e6 + 5;
int dp[N];
 
 
int count(int n) {
	if(n < 0) return 0;
	if(n == 0) return 1;
	if(dp[n] != -1) return dp[n];
	dp[n] = (count(n - 1) + count(n - 2)) % MOD;
	dp[n] = (dp[n] + count(n - 3)) % MOD;
	dp[n] = (dp[n] + count(n - 4)) % MOD;
	dp[n] = (dp[n] + count(n - 5)) % MOD;
	dp[n] = (dp[n] + count(n - 6)) % MOD;
	return dp[n];
}
int32_t main()
{
	BISMILLAH
		
	memset(dp, -1, sizeof(dp));
 
	int n; cin >> n;
	cout << count(n) << nl;
		    
	ALHAMDULILLAH;
}
