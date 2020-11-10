#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int mod=1e9+7,mm=1e6,mn=1e3; 

int dx[4]={-1,1,0,0};
int dy[4]={0,0,1,-1};
char dd[4]={'L','R','D','U'};
int n,m,sx,sy;
bool vis[mn+1][mn+1]; 
char v[mn+1][mn+1];
int d1[mn+1][mn+1],p1[mn+1][mn+1],d2[mn+1][mn+1],p2[mn+1][mn+1];

bool isValid(int x,int y)
{
    if (x<0 || y<0 || x>n-1 || y>m-1)
        return false;
    if (vis[x][y] || v[x][y]=='#')
        return false;
    return true;
}

void bfs(vector<array<int,2>>tmp,int d[mn][mn],int p[mn][mn])
{
    queue<array<int,2>> q;
    memset(d,0,sizeof(d1));
    memset(vis,false,sizeof(vis));
    for (auto it:tmp)
        vis[it[0]][it[1]]=true,q.push(it);
    while(!q.empty())
    {
        array<int,2> tt=q.front();
        q.pop();
        for (int i=0;i<4;++i){
            int ux=tt[0]+dx[i];
            int uy=tt[1]+dy[i];
            if (!isValid(ux,uy))
                continue;
            d[ux][uy]=d[tt[0]][tt[1]]+1;
            q.push({ux,uy});
            vis[ux][uy]=true;
            p[ux][uy]=i;
        }
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
    vector<array<int,2>> s;
    vector<array<int,2>> mon;
    int sx,sy;
    for (int i=0;i<n;++i)
        for (int j=0;j<m;++j){
            cin>>v[i][j];
            if (v[i][j]=='A')
                sx=i,sy=j,v[i][j]='.',s.push_back({sx,sy});
            if (v[i][j]=='M')
                mon.push_back({i,j}),v[i][j]='.';
        }
    bfs(s,d1,p1);
    bfs(mon,d2,p2);
    int tx=-1,ty=0;

    for (int i=0;i<n;++i)
    {
        if (d1[i][0]<d2[i][0])
            tx=i,ty=0;
        if (d1[i][m-1]<d2[i][m-1])
            tx=i,ty=m-1;
    }
    for (int i=0;i<m;++i)
    {
        if (d1[0][i]<d2[0][i])
            tx=0,ty=i;
        if (d1[n-1][i]<d2[n-1][i])
            tx=n-1,ty=i;
    }
    if (~tx)
    {
        cout<<"YES"<<endl;
        string ans;
        while(tx!=sx || ty!=sy)
        {
            ans+=dd[p1[tx][ty]];
            int g=p1[tx][ty];
            g=g^2;
            tx+=dx[g];
            ty+=dy[g];
        }
        reverse(ans.begin(), ans.end());
        cout<<ans.size()<<endl<<ans;
    }
    else{
        cout<<"NO";
    }

}
