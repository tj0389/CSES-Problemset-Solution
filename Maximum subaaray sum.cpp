#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int mod=1e9+7;

// bool cmp(pair<int,int> &a,pair<int,int> &b)
// {
//     if (a.second!=b.second)
//         return a.second<b.second;
//     else
//         return a.first<b.first;
// }

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
    std::vector<int> v(n);

    for (int i=0;i<n;++i)
        cin>>v[i];

    int ma=v[0];
    int ans=v[0];
    for (int i=1;i<n;++i)
    {
        ma=max(v[i],ma+v[i]);
        ans=max(ans,ma);
    }
    cout<<ans<<endl;


    return 0;
    
}