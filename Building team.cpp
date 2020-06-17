#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
int mod=1e9+7;

int n,m;
vector<vector<int>> a(1000001);
bool vis[1000001]={false};
int ans[1000001]={0}; 

bool valid(int x,int y)
{
    if (x<0 || x>n-1 || y<0 || y>m-1)
        return false;
    return true;
}

bool dfs(int s,int c)
{
    vis[s]=true;
    ans[s]=c;
    for(auto it:a[s])
    {
        if (vis[it]==false)
        {
            if (dfs(it,c==1?2:1)==false)
                return false;
        }
        else if (ans[it]==ans[s])
            return false;
    }
    return true;
}

signed main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    int x,y;
    for (int i=0;i<m;++i)
    {
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    bool tmp=true;
    for (int i=1;i<=n;++i)
    {
        if (vis[i]==false)
        {
            tmp=dfs(i,1);
            if (tmp==false)
                break;
        }
    }
    if (tmp)
    {
        for (int i=1;i<=n;++i)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    else 
        cout<<"IMPOSSIBLE"<<endl;

    return 0;
}