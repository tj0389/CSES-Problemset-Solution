#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
int mod=1e9+7;

vector<vector<int>> a(1000001);
bool vis[1000001];
int ans[1000001]; 

void dfs(int s)
{
    vis[s]=true;
    for(auto it:a[s])
    {
        if (vis[it]==false)
        {
            dfs(it);
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

    int n,m;
    cin>>n>>m;
    int x,y;
    vector<pair<int,int>> ans;
    for (int i=0;i<m;++i)
    {
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    for (int i=1;i<=n;++i)
    {
        if (vis[i]==false)
        {
            dfs(i);
            if (i!=1)
            ans.push_back({i-1,i});
        }
    }
    cout<<ans.size()<<endl;
    for (auto it:ans)
        cout<<it.first<<" "<<it.second<<endl;

    return 0;
}