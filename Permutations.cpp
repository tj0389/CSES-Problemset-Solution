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
	// ios_base::sync_with_stdio(false);
 //    cin.tie(NULL);


    int n;
    cin>>n;
    if (n==1)
        cout<<1<<endl;
    else if (n>1 &&n<=3)
    	cout<<"NO SOLUTION"<<endl;
    else
    {
    	int tmp=n;
    	if (tmp%2==0)
    		tmp-=1;
    	while(tmp>=1)
    	{
    	 	cout<<tmp<<" ";
    	 	tmp-=2;
    	}
    	cout<<4<<" "<<2<<" ";
    	tmp=6;
    	while(tmp<=n)
    	{
    		cout<<tmp<<" ";
    		tmp+=2;
    	}
    	cout<<endl;
    }

    return 0;
}