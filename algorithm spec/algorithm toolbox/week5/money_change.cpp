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

void solve()
{
	int n;
	cin>>n;
	// int dp[n+1];
	// dp[1]=1;
	// dp[2]=2;
	// dp[3]=1;
	// dp[4]=1;
	vi v(n+1,-1);
	v[1]=1;
	v[2]=2;
	v[3]=1;
	v[4]=1;
	// vi ans;
	// ans.pb(n);
	// cout<<money(v,n)<<endl;
	// tr(it,ans)
	// cout<<*it<<" ";
	if(n>4)
	{
		for(int i=5;i<=n;i++)
		{
			v[i]=min(min(v[i-3],v[i-4]),v[i-1])+1;
		}
	}
	cout<<v[n];
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


