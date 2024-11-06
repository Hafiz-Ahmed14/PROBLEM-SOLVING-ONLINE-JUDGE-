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
    multiset<int>tower_tops;
 
    for(int i = 1; i <= n; i++) {
        int x; cin >> x;
        auto it = tower_tops.upper_bound(x);
        if(it != tower_tops.end()) {
            tower_tops.erase(it);
            tower_tops.insert(x);
        }
        else tower_tops.insert(x);
    } 
 
    cout << (int)tower_tops.size() << nl;
            
    ALHAMDULILLAH;
}
