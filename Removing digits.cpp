#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
int mod=1e9+7;

int count(int n)
{
    int ma=INT_MIN;
    while(n>0)
    {
        ma=max(ma,n%10);
        n=n/10;
    }
    return ma;
}

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
    int ans=0;
    while(n>0)
        {
            n-=count(n);
            ++ans;
        }
    if (n==0)
        cout<<ans<<endl;
    return 0;
}