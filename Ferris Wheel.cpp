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

    int n,m;
    cin>>n>>m;
    int a[n];
    for (int i=0;i<n;++i)
    	cin>>a[i];
    sort(a,a+n);
    int s=0;
    int e=n-1;
    int count=0;
    while(s<=e)
    {
    	if ((a[s]+a[e])<=m)
    	{
    		count+=1;
    		s++;
    		e--;
    	}
    	else
    	{
    		count+=1;
    		e--;
    	}
    }
    cout<<count<<endl;



    return 0;
}