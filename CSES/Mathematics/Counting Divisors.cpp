#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define nl '\n'
#define successfull return 0
 
void solve(){
	int n; cin>>n;
	int cnt=0;
	for(int i=1; i*i<=n; i++){
		if(n%i==0){
			cnt++;
			if(i!=n/i) cnt++;
		}
	}
	cout<<cnt<<nl;
}
int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
		
	int t;
	 cin>>t;
	 while(t--){
	 	solve();
	 } 
		    
	successfull;
