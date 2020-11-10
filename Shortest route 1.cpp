#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
int mod=1e9+7;

int n,m;
vector<vector<array<int,2>>> v(100001);
vector<int> dis(100001,INT_MAX);
set<array<int,2>> q;

signed main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>m;
    for (int i=0;i<m;++i)
    {
        int x,y,z;
        cin>>x>>y>>z;
        v[x].push_back({y,z});
    }

    q.insert({0,1});
    dis[1]=0;
    while(!q.empty())
    {
        auto it=q.begin();
        int x=(*it)[0];
        int y=(*it)[1];
        q.erase(it);
        
        for (auto itt:v[y])
        {
            int x1=itt[0];
            int y1=itt[1];
            if (dis[x1]>x+y1)
            {
                if (q.find({dis[x1],x1})!=q.end())
                    q.erase(q.find({dis[x1],x1}));
                dis[x1]=x+y1;
                q.insert({dis[x1],x1});
            }
        }
    }
    for (int i=1;i<=n;++i)
        cout<<dis[i]<<" ";
}