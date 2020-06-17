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
    int t;
    cin>>t;
    int ans=1;
    while(t>1)
    {
    	int a;
        cin>>a;
        ans^=a;
        ans^=t;
        t--;
    }
    cout<<ans<<endl;

    return 0;

}