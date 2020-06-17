#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
int mod=1e9+7;

signed main()
{
	// #ifndef ONLINE_JUDGE
 //    freopen("input.txt", "r", stdin);
 //    freopen("output.txt", "w", stdout);
	// #endif
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int n,ans=0;
    cin>>n;
    while(n>=5)
    {
    	ans+=floor(n/5);
    	n=n/5;
    }
    cout<<ans<<endl;
    return 0;
}