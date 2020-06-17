#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
int mod=1e9+7;

char arr[1001][1001];
bool vis[1001][1001];

int n,m;

bool valid(int x,int y)
{
    if (x<0 || x>n-1 || y<0 || y>m-1)
        return false;
    if (vis[x][y]==true || arr[x][y]=='#')
        return false;
    return true;
}

int dfs(int x,int y)
{
    vis[x][y]=true;
    if (valid(x-1,y))
        dfs(x-1,y);  //up
    if (valid(x,y-1))
        dfs(x,y-1);  //left
    if (valid(x,y+1))
        dfs(x,y+1);  //right
    if (valid(x+1,y))
        dfs(x+1,y);  //down
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
    {
        for (int j=0;j<m;++j)
            cin>>arr[i][j];
    }
    int ans=0;
    for (int i=0;i<n;++i)
    {
        for (int j=0;j<m;++j)
        {
            if (arr[i][j]=='.' && vis[i][j]==false)
            {
                ans++;
                dfs(i,j);
            }

        }
    }
    cout<<ans<<endl;    
    return 0;
}