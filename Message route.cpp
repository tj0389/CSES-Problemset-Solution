#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
int mod=1e9+7;
int mx=1e6;

vector<vector<int>> a(mx+1);
std::vector<bool> vis(mx+1);
std::vector<int> ans(mx+1); 

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
    for (int i=0;i<m;++i)
    {
        int x,y;
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    queue<int>q;
    ans[1]=0;
    vis[1]=true;
    q.push(1);
    while(!q.empty())
    {
        int t=q.front();
        q.pop();
        for (auto it:a[t])
        {
            if (vis[it])
                continue;
            vis[it]=true;
            ans[it]=t;
            q.push(it);
        }
    }
    if (ans[n])
    {
        vector<int> r;
        while(n!=0){
            r.push_back(n);
            n = ans[n];
        }   
    cout<<r.size()<<endl;
    for (int i = r.size() - 1; i >= 0; i--)
        cout<<r[i]<<" ";
}
    else
        cout<<"IMPOSSIBLE";  
    return 0;
}