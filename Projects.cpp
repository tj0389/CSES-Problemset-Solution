
// Problem : Projects
// Contest : CSES - CSES Problem Set
// URL : https://cses.fi/problemset/task/1140
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
int dp[mxn];

bool cmp(const array<int,3> &a,const array<int,3> &b){
	if (a[1]!=b[1])
		return a[1]<b[1];
	return a[0]<b[0];
}

int binarySearch(vector<int> jobs, int index) 
{ 
    // Initialize 'lo' and 'hi' for Binary Search 
    int lo = -1, hi = jobs.size() ; 
  
    // Perform binary Search iteratively 
    while (lo +1< hi) 
    { 
        int mid = (lo + hi) / 2; 
        if (jobs[mid] <= index) 
        { 
            lo=mid;
        } 
        else
           hi = mid ; 
    } 
    return lo;
} 

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
    vector<array<int,3>> v(n);
    vector<int> tmp;
    for (int i=0;i<n;++i){
    	cin>>v[i][0]>>v[i][1]>>v[i][2];
    }
    sort(v.begin(),v.end(),cmp);
    
    dp[0]=v[0][2];
    
    tmp.push_back(v[0][1]);
    
    for (int i=1;i<n;++i){
    	tmp.push_back(v[i][1]);
    	//include v[i]
    	int inclprofit=v[i][2];
    	int idx=binarySearch(tmp,v[i][0]);
    	if (idx>0 && tmp[idx]==v[i][0])
    		inclprofit+=dp[idx-1];
    	if (idx>=0 && tmp[idx]<v[i][0])
    		inclprofit+=dp[idx];
    	
    	// exclude
    	int exclprofit=dp[i-1];
    	
    	dp[i]=max(inclprofit,exclprofit);
    	
    }
    
    cout<<dp[n-1]<<endl;
   
   	return 0;
}