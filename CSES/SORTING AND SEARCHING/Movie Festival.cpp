#include<bits/stdc++.h>
using namespace std;
 
//Define start and end marco
#define BISMILLAH ios_base::sync_with_stdio(0);cin.tie(0);
#define ALHAMDULILLAH return 0
#define ll long long
#define pb push_back
#define nl '\n'
 
bool cmp(pair<int,int>a,pair<int,int>b){
    return a.second < b.second;
}
 
int32_t main()
{
    BISMILLAH
        
    int n; cin >> n;
 
    vector<pair<int,int>>a;
 
    for(int i = 0; i < n; i++) {
        int x , y;
        cin >> x >> y;
        a.emplace_back(x, y);
    } 
 
    sort(a.begin(), a.end(), cmp);
 
    int check = -1, ans = 0;
 
    for(auto [start, end]: a) {
        if(start >= check) {
            ans++;
            check = end;
        }
    }
 
    cout << ans << nl;
 
    ALHAMDULILLAH;
}
