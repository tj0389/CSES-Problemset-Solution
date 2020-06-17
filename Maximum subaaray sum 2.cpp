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

    int n,a,b;
    cin>>n>>a>>b;
    std::vector<int> v(n);
    multiset<int> s;
    
    for (int i=0;i<n;++i)
        cin>>v[i];

    int ans=INT_MIN,sum=0;
    for (int j=a;j<=b;++j)
    {
        sum=0;
        for (int i=0;i<j;++i)
            sum+=v[i];
        ans=max(ans,sum);
        
        for (int i=0;i<n-j;++i)    
        {
            sum=sum+v[i+j]-v[i];
            ans=max(ans,sum);
        }
    }
    cout<<ans<<endl;
    return 0;
}