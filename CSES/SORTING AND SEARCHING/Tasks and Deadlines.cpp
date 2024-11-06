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
    ll ans = 0;
    vector<int> duration;
 
    for(int i = 1; i <= n; i++) {
        int dura, dead;
        cin >> dura >> dead;
        ans += dead;
        duration.push_back(dura);
    }
 
    sort(duration.begin(), duration.end());
 
    ll finishing_time = 0;
    for(auto d: duration) {
        finishing_time += d;
        ans -= finishing_time;
    }
 
    cout << ans << nl;
            
    ALHAMDULILLAH;
}
