#include<bits/stdc++.h>
using namespace std;
// #define int long long
#define ll long long
#define sz(a) (int)(a.size())
#define pb push_back
#define all(c) c.begin(),c.end()
#define tr(it,c) for(auto it=c.begin();it!=c.end();it++)
#define fr(i,n)	for(int i=0;i<n;i++)
#define present(c,x) (c.find(x)!=c.end()) //for set/map etc.
#define cpresent(c,x) (find(all(c),x)!=c.end())
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pair<int,int>> vp;
int N=100001;
int mod=1e9+7;
int min(int a,int b){if(a<b) return a; else return b;}
int max(int a,int b){if(a>b) return a; else return b;}
int power(int a,int b){int res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
int gcd(int p, int q){if(p%q==0) return q; else{return gcd(q,p%q);}} 
bool comp(int a, int b) 
{ 
    return (a < b); 
} 

// int search(int* v, int l,int r, int key)
// {
// 	if(l>r)return -1;
// 	int mid= l+(r-l)/2;
// 	if(v[mid]==key)return (mid);
// 	else if(v[mid]>key)return search(v,l , mid-1, key);
// 	else return search(v,mid+1,r,key);
// }
// vi v;
void solve()
{
	int n;
	cin>>n;
	vi v(n);
	// int count[1000000001];
	fr(i,n){cin>>v[i];}
	sort(all(v));
	int count=1;
	fr(i,n)
	{
		if(i!=0)
		{if(v[i]==v[i-1])count++;
		else
		{
			count=1;
		}}
		if(count>(n/2)){cout<<1;return;}
	}
	cout<<0;
}

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif
	// int t;
	// cin>>t;
	// while(t--)
	// {
	// 	solve();
	// 	cout<<endl;
	// }
	solve();
	return 0;
	
}



