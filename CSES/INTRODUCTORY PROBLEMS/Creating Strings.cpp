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
	
	string s; cin>>s;
	sort(s.begin(),s.end());
	multiset<string>se;
	se.insert(s);
	while(next_permutation(s.begin(),s.end())){
		se.insert(s);
	}
 
	cout<<se.size()<<nl;
	for(auto x: se) cout<<x<<nl;
		    
	ALHAMDULILLAH;
}
