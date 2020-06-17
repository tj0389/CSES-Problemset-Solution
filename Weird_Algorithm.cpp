#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
int mod=1e9+7;

signed main()
{
	//#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
	//#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    cout<<t<<" ";
    while(t>1)
    {
    	if (t%2==0)
    	{
    		cout<<t/2<<" ";
    		t=t/2;
    	}
    	else
    	{
    		t=3*t+1;
    		cout<<t<<" ";
    	}
    }


    return 0;

}