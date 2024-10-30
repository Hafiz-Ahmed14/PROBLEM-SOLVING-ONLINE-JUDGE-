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
	int a[n];
 
	int sum=0;
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	ll cnt=0;
	for(int i=0; i<n-1; i++) {
		if(a[i]>a[i+1]){
			int x=a[i]-a[i+1];
			//cout<<x<<nl;
			cnt+=x;
			a[i+1]=a[i+1]+x;
		}
	}
 
 
	cout<<cnt<<nl;
 
	ALHAMDULILLAH;
}
