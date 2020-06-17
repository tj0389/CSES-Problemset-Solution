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


    int n;
    cin>>n;
    if (n%4==0 || n%4==3)
    {
    	cout<<"YES"<<endl;
    	if (n%4==0)
    	{
    		cout<<n/2<<endl;
    		for (int i=1;i<=n/2;++i)
    		{
    			if (i%2!=0)
    			{
    				cout<<i<<" "<<n-i+1<<" ";
    			}
    		}
    		cout<<endl<<n/2<<endl;
    		for (int i=1;i<=n/2;++i)
    		{
    			if (i%2==0)
    			{
    				cout<<i<<" "<<n-i+1<<" ";
    			}
    		}
    	}
    	else
    	{
    		cout<<(n+1)/2<<endl;
    		cout<<1<<" "<<2<<" ";
    		for (int i=4;i<(n+1);i+=4)
    		{
    				cout<<i<<" "<<i+3<<" ";
    		}
    		cout<<endl<<n/2<<endl;
    		cout<<3<<" ";
    		for (int i=5;i<=(n+1);i+=4)
    		{
    				cout<<i<<" "<<i+1<<" ";
    		}
    	}
    }
    else
    	cout<<"NO"<<endl;

    return 0;
}