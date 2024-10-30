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
	 
	int n; cin>>n;
	vector<string>gray;
 
	gray.pb("0");
	gray.pb("1");
 
	for(int i=2; i<=n; i++) {
		int size=gray.size();
		for(int j=size-1; j>=0; j--) {
			gray.pb(gray[j]);
		}
		for(int k=0; k<size; k++) {
			gray[k]="0"+gray[k];
			gray[k+size]="1"+gray[k+size];
		}
	}
 
	for(auto c: gray) cout<<c<<nl;
 
 
	ALHAMDULILLAH;
}
