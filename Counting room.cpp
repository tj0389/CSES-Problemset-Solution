#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int mod=1e9+7,mm=1e6,mn=1e3; 

int dx[4]={-1,1,0,0};
int dy[4]={0,0,1,-1};
int n,m;
bool vis[mn][mn]; 
char v[mn][mn];

bool isValid(int x,int y)
{
    if (x<0 || y<0 || x>n-1 || y>m-1)
        return false;
    if (vis[x][y] || v[x][y]=='#')
        return false;
    return true;
}

void dfs(int x,int y)
{
    if (vis[x][y])
        return;
    vis[x][y]=true;
    for (int i=0;i<4;++i){
        if (isValid(x+dx[i],y+dy[i]) && v[x+dx[i]][y+dy[i]]=='.')
            dfs(x+dx[i],y+dy[i]);
    }
}

signed main()
{

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>m;
    for (int i=0;i<n;++i)
        for (int j=0;j<m;++j)
            cin>>v[i][j];
    int count=0;
    for (int i=0;i<n;++i)
    {
        for (int j=0;j<m;++j)
        {
            if (!vis[i][j] && v[i][j]=='.'){
                ++count;
                dfs(i,j);
            }
        }
    }
    cout<<count;


}
