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

    int n,m,k;
    cin>>n>>m>>k;
    int a[n],b[m];
    for (int i=0;i<n;++i)
    	cin>>a[i];
    for (int i=0;i<m;++i)
    	cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    int i=0,j=0;
    int ans=0;
    while(i<n && j<m)
    {
    	if ((a[i]+k)>=b[j] && (a[i]-k)<=b[j])
		{
    		ans++;
    		i++;
            j++;
    	}
    	else if (b[j]>(a[i]+k))
    	{
    		++i;
    	}
        else
            ++j;
    }
    cout<<ans<<endl;
    return 0;
}