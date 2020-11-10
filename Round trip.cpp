#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
int mod=1e9+7;
int n,m;
vector<vector<int>> v(100001);
std::vector<int> p(100001);
std::vector<bool> vis(100001);
vector<int> ans;

void dfs(int root,int parent=-1)
{
    p[root]=parent;
   // cout<<"parent of "<<root<<"  "<<parent<<endl; 
    vis[root]=1;
    for (auto it:v[root])
    {
        if (!vis[it])
            dfs(it,root);
        else if (it!=parent){
            ans.push_back(it);
            int tmp=root;
            while (it^root)
            {
                ans.push_back(root);
                root=p[root];
            }
            ans.push_back(root);
            cout<<ans.size()<<endl;
            for (auto it:ans)
                cout<<it<<" ";
            exit(0);
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

    int x,y;
    for (int i=0;i<m;++i)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);

    }
    // for (int i=1;i<=n;++i)
    // {
    //     cout<<i<<" ";
    //     for (auto it:v[i])
    //         cout<<it<<" ";
    //     cout<<endl;
    // }
    for (int i=1;i<=n;++i)
    {
        if (!vis[i])
            dfs(i);
    }
    // dfs(3);
    cout<<"IMPOSSIBLE";
    return 0;
}