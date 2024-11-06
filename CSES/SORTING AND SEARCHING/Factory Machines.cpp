#include<bits/stdc++.h>
using namespace std;
 
//Define start and end marco
#define BISMILLAH ios_base::sync_with_stdio(0);cin.tie(0);
#define ALHAMDULILLAH return 0
#define ll long long
#define pb push_back
#define nl '\n'
 
const int N = 2e5 + 9;
int a[N];
int n, s;
 
bool get(ll x) {
    unsigned long long machine_cnt = 0;
    for(int i = 1; i <= n; i++) {
        machine_cnt += (x / a[i]);
        if(machine_cnt >= s) return true;
    }
    return false;
}
 
int32_t main()
{
    BISMILLAH
        
    cin >> n >> s; 
 
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    ll l = 1, r = 1e18;
    ll ans = -1;
 
    while(l <= r) {
        ll mid = (l + r) >> 1;
        //cout << mid << nl;
        if(get(mid)) {
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
 
    cout << ans << nl;
 
    ALHAMDULILLAH;
}
