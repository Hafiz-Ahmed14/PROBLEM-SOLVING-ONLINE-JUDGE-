#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define nl '\n'
#define successfull return 0
 
 
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
        
    int n,t;
    cin>>n>>t;
    int arr[n+5];
    int pre[n+5];
    int sum=0;
    for(int i=1; i<=n; i++){
        cin>>arr[i];
        sum+=arr[i];
        pre[i]=sum;
    }
    while(t--){
        int l,r;
        cin>>l>>r;
        if(l==1) cout<<pre[r]<<nl;
        else{
            cout<<pre[r]-pre[l-1]<<nl;
        }
    }      
    successfull;
}
