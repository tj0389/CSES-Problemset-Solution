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
 	set<int> s;
    for (int i=0;i<t;++i)
   	{
   		int a;
   		cin>>a;
   		s.insert(a);
   	}
   	cout<<s.size()<<endl;


    return 0;
}