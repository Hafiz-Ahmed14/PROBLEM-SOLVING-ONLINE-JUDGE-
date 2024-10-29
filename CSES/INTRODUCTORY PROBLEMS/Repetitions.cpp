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
        
   string s; cin>>s;
   int ans=1,cnt=1;
   for (int i = 0; i < s.size(); ++i)
   {
       if(s[i]==s[i+1]){
        cnt++;
        ans=max(cnt,ans);
       }
       else
       cnt=1;
   }
   cout<<ans<<nl;
 
            
    successfull;
}
