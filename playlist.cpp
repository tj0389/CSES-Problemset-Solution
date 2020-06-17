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
    unordered_map<int,int> m;
    for (int i=0;i<n;++i)
        cin>>a[i];
    int ans=0;
    for (int i=0,j=0;i<n;++i)
    {
        if (m.find(a[i])!=m.end())
        {
            j=max(m[a[i]],j);
        }
        m[a[i]]=i+1;
        ans=max(ans,i-j+1);
    }
    cout<<ans<<endl;
    return 0;
}