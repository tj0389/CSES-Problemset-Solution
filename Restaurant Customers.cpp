#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int mod=1e9+7;

signed main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    std::vector<pair<int,char>> p(n);
    for (int i=0;i<n;++i)
    {
        int a,b;
        cin>>a>>b;
        p.push_back(make_pair(a,'a'));
        p.push_back(make_pair(b,'d'));
    }
    sort(p.begin(), p.end());
    int count=0,ans=0;
    for (int i=0;i<p.size();++i)
    {
        if (p[i].second=='a')
            count++;
        if (p[i].second=='d')
            count--;
        ans=max(ans,count);
    }
    cout<<ans<<endl;
    return 0;
    
}