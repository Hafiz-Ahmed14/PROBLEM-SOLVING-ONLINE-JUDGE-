#include<bits/stdc++.h>
using namespace std;
 
//Define start and end marco
#define BISMILLAH ios_base::sync_with_stdio(0);cin.tie(0);
#define ALHAMDULILLAH return 0
#define ll long long
#define pb push_back
#define nl '\n'
 
const int N = 2e5 + 5;
 
int a[N], n, k;
 
bool f(ll x) {
    for(int i = 1; i <= n; i++) {
        if(a[i] > x) return false;
    }
 
    int cnt_subarray = 1;
    ll sum_subarry = a[1];
 
    for(int i = 2; i <= n; i++) {
        if(sum_subarry + a[i] <= x) {
            sum_subarry += a[i];
        }
        else  {
            cnt_subarray++;
            sum_subarry = a[i];
        }
    }
 
    return cnt_subarray <= k;
}
 
int32_t main()
{
    BISMILLAH
        
    cin >> n >> k;
 
    for(int i = 1; i <= n; i++) cin >> a[i];
 
    ll l = 0, r = 2e14, ans = 0;
 
    while(l <= r) {
        ll mid = (l + r) >> 1;
        if(f(mid)) {
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    } 
 
    cout << ans << nl;
            
    ALHAMDULILLAH;
