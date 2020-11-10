#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
int mod=1e9+7;

char arr[1001][1001];
char path[1001][1001];
bool vis[1001][1001];
int d[1001][1001];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
char ans[]={'U','R','D','L'};
queue<array<int,2>> q; 
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
    while(!q.empty())
    {
        int curx=q.front()[0];
        int cury=q.front()[1];
        q.pop();
        for (int i=0;i<4;++i)
        {
            if (valid(curx+dx[i],cury+dy[i]))
            {
                path[curx+dx[i]][cury+dy[i]]=ans[i];
                d[curx+dx[i]][cury+dy[i]]=i;
                vis[curx+dx[i]][cury+dy[i]]=1;
                q.push({curx+dx[i],cury+dy[i]});
            }
        }
    }

    if (path[endx][endy])        //backtrace path
    {
        string ans="";
        while(srcx!=endx || srcy!=endy)
        {
            ans+=path[endx][endy];
            int tmp=d[endx][endy];
            tmp=tmp^2;  //0-2   1-3
            endx+=dx[tmp];
            endy+=dy[tmp];
        }
        reverse(ans.begin(), ans.end());
        cout<<"YES"<<endl;
        cout<<ans.size()<<endl;
        cout<<ans;
    }
    else
        cout<<"NO";

}

signed main()
{

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
                arr[i][j]='.';
            }
            if (arr[i][j]=='B')
            {
                endx=i;
                endy=j;
                arr[i][j]='.';
            }   
        }
    }
    bfs(sx,sy);
    
    return 0;
}