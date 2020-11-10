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
	tree[index]=min(tree[2*index],tree[2*index+1]);
	return;
}

//query
int query(int ss,int se,int qs,int qe,int *tree,int index){
	if (qs<=ss && qe>=se)
		return tree[index];
	if (qe<ss || se<qs)
		return INT_MAX;
	int m=(ss+se)/2;
	int left=query(ss,m,qs,qe,tree,2*index);
	int right=query(m+1,se,qs,qe,tree,2*index+1);
	return min(left,right);
}


//point update
void update(int ss,int se,int q,int val,int *tree,int index){
	if (q<ss || q>se)
		return;
	if (ss==se && q==ss){
		tree[index]=val;
		return;
	}
	int m=(se+ss)/2;
	update(ss,m,q,val,tree,2*index);
	update(m+1,se,q,val,tree,2*index+1);
	tree[index]=min(tree[2*index],tree[2*index+1]);
	return;
}

//range update
void ra_update(int ss,int se,int qs,int qe,int val,int *tree,int index){
	if (qe<ss || se<qs)
		return;
	if (ss==se){
		tree[index]=val;
		return;
	}
	int m=(ss+se)/2;
	ra_update(ss,m,qs,qe,val,tree,2*index);
	ra_update(m+1,se,qs,qe,val,tree,2*index+1);
	tree[index]=min(tree[2*index],tree[2*index+1]);
	return;
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