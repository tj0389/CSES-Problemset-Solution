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
    	if (a<b)
    		swap(a,b);
    	int d=abs(a-b);
    	a-=2*d;
    	b-=d;
    	if (a%3==0 && b%3==0 && a>=0 && b>=0)
    		cout<<"YES"<<endl;
    	else
    		cout<<"NO"<<endl;
    }


    return 0;
}