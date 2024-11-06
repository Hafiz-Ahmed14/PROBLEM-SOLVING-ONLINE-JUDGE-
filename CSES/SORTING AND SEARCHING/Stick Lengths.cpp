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
        
    int n; cin >> n;
    vector<int> a;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        a.push_back(x);
    } 
 
    sort(a.begin(), a.end());
 
    int mid = a[n / 2];
    //cout << mid << nl;
    ll ans = 0;
    for(auto x: a) {
        ans += abs(x - mid);
    }
    cout << ans << nl;
            
    ALHAMDULILLAH;
}
