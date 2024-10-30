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
	int total=0;
 
	for(int i=5; n/i>=1; i*=5){
		total+=(n/i);
	}
 
	cout<<total<<nl;
	
	ALHAMDULILLAH;
}
