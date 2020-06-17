#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
int mod=1e9+7;

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
    vector<vector<int>> a(n+1);
	bool vis[n+1];
	int ans[n+1]; 
	queue<int> q;
    int x,y;
    for (int i=0;i<m;++i)
    {
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    ans[1]=-1;
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
            vis[it]=1;
            ans[it]=t;
            q.push(it);
        }
    }
    if (!ans[n])
    cout<<"IMPOSSIBLE"<<endl;
    else
    {
        vector<int> r;
        int u = n;
        while (u > 0) 
        {
        	r.push_back(u);
        	u = ans[u];
        }
    cout << r.size() << "\n";
    for (int i = r.size() - 1; i >= 0; i--)
    cout << r[i] << " \n"[!i];
}

    return 0;
}