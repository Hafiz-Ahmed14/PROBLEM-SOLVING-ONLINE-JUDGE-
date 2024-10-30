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
 
 
 
int32_t main()
{
	BISMILLAH
		
	int n; cin>>n;
	if(n==1){
		cout<<1<<nl;
		return 0;
	}
	if(n<=3) {
		cout<<"NO SOLUTION"<<nl;
		return 0;
	}
	vector<int>even,odd;
	for(int i=1; i<=n; i++){
		if(i&1) odd.pb(i);
		else even.pb(i);
	}
	for(int x: even) cout<<x<<" ";
	for(int x: odd) cout<<x<<" ";
		    
	ALHAMDULILLAH;
}
