#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define nl '\n'
#define successfull return 0
 
int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
		
	ll n; cin>>n;
	ll ans=(n*(n+1))/2;
	ll arr[n];
	ll anss=0;
	for(ll i=0; i<n-1; i++){
		cin>>arr[i];
		anss+=arr[i];
 
 
	}
	cout<<ans-anss<<nl;    
	successfull;
}
