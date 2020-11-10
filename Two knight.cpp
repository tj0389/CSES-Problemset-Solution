#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
int mod=1e9+7;

signed main()
{

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int n;
    cin>>n;
    for (int i=1;i<=n;++i)
    {
    	int tmp=i*i;
    	int total=(tmp)*(tmp-1)/2;
    	int fail=0;
    	if (i>2)
    		fail=4*(i-2)*(i-1);
    	cout<<total-fail<<endl;
    }


    return 0;
}