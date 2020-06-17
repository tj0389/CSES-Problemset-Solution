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
    std::vector<int> a(n);
    for (int i=0;i<n;++i)
        cin>>a[i];
    sort(a.begin(), a.end());
    int m=n/2,ans=0;
    for(int i=0;i<n;++i)
        ans+=abs(a[i]-a[m]);
    cout<<ans<<endl;
    return 0;
}