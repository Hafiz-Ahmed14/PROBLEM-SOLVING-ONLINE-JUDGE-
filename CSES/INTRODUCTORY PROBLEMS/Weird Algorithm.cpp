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
	cout<<n<<" ";
	while(n!=1){
		if(n%2==0){
			n=n/2;
			cout<<n<<" ";
		}
		else{
			n=(n*3)+1;
			cout<<n<<" ";
		}
	}
	cout<<nl;
	
		    
	successfull;
}
