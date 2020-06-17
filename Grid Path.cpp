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

    int n;
    cin>>n;
    char a[n][n];
    for (int i=0;i<n;++i)
        for (int j=0;j<n;++j)
            cin>>a[i][j];
    int dp[n][n]={0};
    if (a[0][0]=='*')
    {
        cout<<0<<endl;
        return 0;
    }
    for (int i=0;i<n;++i)
    {
        if (a[0][i]=='.')
            dp[0][i]=1;
        else
            break;
    }
    for (int i=0;i<n;++i)
    {
        if (a[i][0]=='.')
            dp[i][0]=1;
        else
             break;
    }
    for (int i=1;i<n;++i)
    {
        for (int j=1;j<n;++j)
        {
            if (a[i][j]=='*')
                continue;
            if(a[i-1][j]=='.')
                dp[i][j]=(dp[i][j]+dp[i-1][j]+mod)%mod;
            if(a[i][j-1]=='.')
                dp[i][j]=(dp[i][j]+dp[i][j-1]+mod)%mod;
        }
    }
    if (a[n-1][n-1]!='*')
        cout<<dp[n-1][n-1]<<endl;
    else
        cout<<0<<endl;
    return 0;
}