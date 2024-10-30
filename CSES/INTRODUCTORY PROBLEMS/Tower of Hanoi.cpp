#include<bits/stdc++.h>
using namespace std;
 
//Define start and end marco
#define BISMILLAH ios_base::sync_with_stdio(0);cin.tie(0);
#define ALHAMDULILLAH return 0
#define ll long long
#define pb push_back
#define nl '\n'
 
void TowerOfHanoi(int n, int a, int b, int c) {
	if(n==0) return;
	TowerOfHanoi(n-1,a,c,b);
	cout<<a<<" "<<c<<nl;
	TowerOfHanoi(n-1,b,a,c);
}
 
int32_t main()
{
	BISMILLAH
		
	int n; cin>>n;
	cout<<(1<<n)-1<<nl; 
 
	TowerOfHanoi(n,1,2,3);
		    
	ALHAMDULILLAH;
}
