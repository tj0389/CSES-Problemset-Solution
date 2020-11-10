#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
int mod=1e9+7;

int vis[10][10];
int d[10][10];
int dx[]={-2,-1,2,1,-2,-1,2,1};
int dy[]={-1,-2,-1,-2,1,2,1,2};

bool valid(int x,int y)
{
    if (x<0 || x>7 || y<0 || y>7)
        return false;
    if (vis[x][y])
        return false;
    return true;
}

void dfs(int x,int y,int a)
{
    if (vis[x][y])
        return;
    vis[x][y]=a;
    for(int i=0;i<8;++i)
    {
        if (valid(x+dx[i],y+dy[i])){
            d[x+dx[i]][y+dy[i]]=d[x][y]+1;
            dfs(x+dx[i],y+dy[i],a+1);
        }
    }
    vis[x][y]=0;
}

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin>>n>>m;

    dfs(m-1,n-1,1);
    
    for (int i=0;i<8;++i)
    {
        for(int j=0;j<8;++j)
            cout<<d[i][j]<<" ";
        cout<<endl;
    }
    
    return 0;
}   