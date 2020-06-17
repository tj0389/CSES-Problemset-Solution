#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
int mod=1e9+7;

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
    std::vector<pair<int,int>> a(n);
    
    for (int i=0;i<n;++i)
        cin>>a[i].first>>a[i].second;
    sort(a.begin(),a.end());
    
    int ans=0,sum=0;
    for (int i=0;i<n;++i)
    {
        sum+=(a[i].first);
        ans+=(a[i].second-sum);
    }
    cout<<ans<<endl;

    return 0;
}