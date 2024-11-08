#include<bits/stdc++.h>
using namespace std;
 
//Define start and end marco
#define BISMILLAH ios_base::sync_with_stdio(0);cin.tie(0);
#define ALHAMDULILLAH return 0
#define ll long long
#define pb push_back
#define nl '\n'
const int N = 1005;
bool vis[N][N];
char a[N][N];
 
int n, m;
 
int dx[] = {0, -1, 0, +1, -1, -1, +1, +1};
int dy[] = {+1, 0, -1, 0, +1, -1, -1, +1};
 
bool is_valid(int i, int j) {
    return (i >= 0 and i < n and j >= 0 and j < m);
}
 
void dfs(int i, int j) {
    vis[i][j] = true;
    for(int k = 0; k < 4; k++) {
        int ii = i + dx[k];
        int jj = j + dy[k];
        if(is_valid(ii, jj) and a[ii][jj] == '.' and !vis[ii][jj]) {
            dfs(ii, jj);
        }
    }
}
int32_t main()
{
    BISMILLAH
        
    cin >> n >> m;
 
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    } 
 
    int cnt_room = 0;
 
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(a[i][j] == '.' and !vis[i][j]) {
                dfs(i, j);
                cnt_room++;
            }
        }
    }
 
    cout << cnt_room << nl;
            
    ALHAMDULILLAH;
}
