
// Problem : Increasing Subsequence
// Contest : CSES - CSES Problem Set
// URL : https://cses.fi/problemset/task/1145
// Memory Limit : 512 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 	
int mod=1e9+7;
int po(int x,int y,int m)  { if (y==0) return 1; int t=po(x,y/2,m)%m; t=(t*t)%m; if (y&1) return (t*x)%m;	return t%m; }

const int mxn=2e5;
int dp[mxn]={1};

signed main() {

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0); 

   int n;
   cin>>n;
   vector<int> tmp;
   int a;
   cin>>a;
   tmp.push_back(a);
   for (int i=1;i<n;++i){
   		cin>>a;
   		if (tmp.back()<a)
   			tmp.push_back(a);
   		else{
   			int idx=lower_bound(tmp.begin(),tmp.end(),a)-tmp.begin();
   			if (idx<tmp.size())
   				tmp[idx]=a;
   		}
   }
   cout<<tmp.size()<<endl;
   	return 0;
}