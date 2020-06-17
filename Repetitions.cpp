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
    string s;
    cin>>s;
    int n=s.size();
    int count=1,ans=0;
    for (int i=1;i<n;++i)
    {
    	if(s[i]==s[i-1])
    		count++;
    	else
    	{
    		ans=max(ans,count);
    		count=1;
    	}

    }
    ans=max(ans,count);
    cout<<ans<<endl;


    return 0;

}