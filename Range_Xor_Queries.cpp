#include<bits/stdc++.h>
using namespace std;
#define int long long

//build tree
void build_tree(int *a,int s,int e,int *tree,int index){
	if (s==e){
		tree[index]=a[s];
		return;
	}
	int m=(s+e)/2;
	build_tree(a,s,m,tree,2*index);
	build_tree(a,m+1,e,tree,2*index+1);
	tree[index]=(tree[2*index]^tree[2*index+1]);
	return;
}

//query
int query(int ss,int se,int qs,int qe,int *tree,int index){
	if (qs<=ss && qe>=se)
		return tree[index];
	if (qe<ss || se<qs)
		return 0;
	int m=(ss+se)/2;
	int left=query(ss,m,qs,qe,tree,2*index);
	int right=query(m+1,se,qs,qe,tree,2*index+1);
	return (left^right);
}

signed main(){
	int n,q;
	cin>>n>>q;
	int a[n];
	for (int i=0;i<n;++i)
		cin>>a[i];
	int tree[4*n+1];
	build_tree(a,0,n-1,tree,1);
	while(q--){
		int x,y;
		cin>>x>>y;
		cout<<query(0,n-1,x-1,y-1,tree,1)<<endl;
	}
}