#include<bits/stdc++.h>
using namespace std;
 
//Define start and end marco
#define BISMILLAH ios_base::sync_with_stdio(0);cin.tie(0);
#define ALHAMDULILLAH return 0
 
//Define shortcut Macro..
#define vi vector<int>
#define vs vector<string>
#define vc vector<char>
#define ll long long
#define pb push_back
#define nl '\n'
 
//int d[104];
 
const ll MOD=1000000007;
 
int power(ll base,ll n){
	ll res=1;
	while(n){
		if(n&1){
			res=(res*base)%MOD;
			n--;
		}
		else{
			base=(base*base)%MOD;
			n=n/2;
		}
	}
	return res;
}
 
int32_t main()
{
	BISMILLAH
 
	ll n; cin>>n;
 
	cout<<power(2,n);
	
 
	ALHAMDULILLAH;
}
