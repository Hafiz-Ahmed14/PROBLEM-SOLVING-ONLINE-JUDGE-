// There use manually code, not use any stl
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
 
    int n,count=0; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0; i<n; i++){
        if(arr[i]!=arr[i+1]){
            count++;
        }
    }
    cout<<count<<endl;
 
    successfull;
}


// Using stl
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define pb push_back
// #define nl '\n'
// #define successfull return 0
 
// int32_t main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0),cout.tie(0);
 
//     int n; cin>>n;
//     unordered_set<int>s;
//     for(int i=0; i<n; i++){
//         int x; cin>>x;
//         s.insert(x);
//     }
//     cout<<s.size()<<nl;
    
//     successfull;
// }
