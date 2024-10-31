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
        
    int n,m,k;
    cin>>n>>m>>k;
    int a[n],b[m];
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m; i++) cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    int res=0,i=0,j=0;
    while(i<n && j<m){
        if(abs(a[i]-b[j])<=k){
            res++;
            i++;
            j++;
        }
        else if(a[i]>b[j]){
            j++;
        }
        else i++;
    }
    cout<<res<<nl;
            
    successfull;
}
