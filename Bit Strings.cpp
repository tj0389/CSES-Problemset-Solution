#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
int mod=1e9+7;

signed main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int n,ans=1;
    cin>>n;
    for (int i=0;i<n;++i)
    	ans=(ans*2)%mod;
    cout<<ans<<endl;

    return 0;
}