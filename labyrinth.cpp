#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
int mod=1e9+7;

char arr[1001][1001];
bool vis[1001][1001]={false};
int dis[1001][1001]={0};
vector<vector<string> > path(1001,vector<string> (1001,""));
int dx[]={-1,1,0,0};
int dy[]={0,0,1,-1};
char ans[]={'U','D','R','L'};
queue<pair<int,int>> q; 
int sx,sy,endx,endy;
int n,m;

bool valid(int x,int y)
{
    if (x<0 || x>n-1 || y<0 || y>m-1)
        return false;
    if (vis[x][y]==true || arr[x][y]=='#')
        return false;
    return true;
}

void bfs(int srcx,int srcy)
{
    q.push({srcx,srcy});
    vis[srcx][srcy]=1;
    dis[srcx][srcy]=0;
    path[srcx][srcy]="";
    while(!q.empty())
    {
        int curx=q.front().first;
        int cury=q.front().second;
        q.pop();
        for (int i=0;i<4;++i)
        {
            if (valid(curx+dx[i],cury+dy[i]))
            {
                dis[curx+dx[i]][cury+dy[i]]=dis[curx][cury]+1;
                path[curx+dx[i]][cury+dy[i]]=path[curx][cury]+ans[i];
                vis[curx+dx[i]][cury+dy[i]]=1;
                q.push({curx+dx[i],cury+dy[i]});
            }
        }
    }

}

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin>>n>>m;
    for (int i=0;i<n;++i)
        for (int j=0;j<m;++j)
            cin>>arr[i][j];
    for (int i=0;i<n;++i)
    {
        for (int j=0;j<m;++j)
        {
            if (arr[i][j]=='A')
            {
                sx=i;
                sy=j;
            }
            if (arr[i][j]=='B')
            {
                endx=i;
                endy=j;
            }   
        }
    }
    bfs(sx,sy);
    if (dis[endx][endy]>0)
    {
        cout<<"YES"<<endl;
        cout<<dis[endx][endy]<<endl;
        cout<<path[endx][endy]<<endl;
    }
    else
        cout<<"NO"<<endl;
    
    return 0;
}