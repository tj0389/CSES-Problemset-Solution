#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int mod=1e9+7,mm=1e6;

int c[mm+1],p[mm+1],dp[mm+1];

signed main()
{

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x;
    cin>>n>>x;
    for (int i=0;i<n;++i)
        cin>>c[i];
    for (int i=0;i<n;++i)
        cin>>p[i];
    
    for (int i=0;i<n;++i)
    {
        for (int j=x;j>=c[i];--j){
            dp[j]=max(dp[j],dp[j-c[i]]+p[i]);
        }
    }
    cout<<dp[x];
}
