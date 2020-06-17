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
    while(t--)
    {
    	int a,b;
    	cin>>a>>b;
    	int m=max(a,b);
    	int ans;
    	if (m%2)
    	{
    		if (m==a)
    			ans=(m-1)*(m-1)+b;
    		else
    			ans=m*m-(a-1);
    	}
    	else
    	{
    		if (m==a)
    			ans=m*m-(b-1);
    		else
    			ans=(m-1)*(m-1)+a;
    	}
    	cout<<ans<<endl;
    }

    return 0;
}