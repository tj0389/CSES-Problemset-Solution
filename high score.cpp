#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
int mod=1e9+7;
int mi=-1e9-1;
int n,m;
vector<array<int,3>> v;
std::vector<int> dis(2503,mi);

signed main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin>>n>>m;
    dis[1]=0;
    for (int i=0;i<m;++i)
    {
        int x,y,z;
        cin>>x>>y>>z;
        v.push_back({x,y,z});
    }
    for (int i=0;i<n;++i)
    {
        for (auto e:v)
        {
            dis[e[1]]=max(dis[e[1]],dis[e[0]]+e[2]);
        }
    }
    cout<<dis[n]<<endl;


}