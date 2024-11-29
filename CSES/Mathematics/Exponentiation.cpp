#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define nl '\n'
#define successfull return 0
 
const int MOD =1e9+7;
 
ll power(ll base ,ll power){
	ll ans=1;
	while(power){
		if(power&1){
			ans=(ans*base)%MOD;
			power--;
		}
		else{
			base=(base*base)%MOD;
			power=power/2;
		}
	}
	return ans;
}
 
int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
		
	ll t;
	 cin>>t;
	 while(t--){
	 	ll a,b;
	 	cin>>a>>b;
	 	cout<<power(a,b)<<nl;
	 } 
		    
	successfull;
}
