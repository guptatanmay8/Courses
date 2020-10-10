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

int money(vector<int> v, int n , vector<int>& ans)
{
	
}
void solve()
{
	int n;
	cin>>n;
	int dp[n+1];
	int a,b,c;
	dp[1]=0;
	if(n>1)
	{
		for(int i=2;i<=n;i++)
		{
			a=INT_MAX,b=INT_MAX,c=INT_MAX;
			if(i%3==0)a=dp[i/3];
			if(i%2==0)b=dp[i/2];
			c= dp[i-1];
			dp[i]= min(min(a,b),c)+1;
		}
	}
	cout<<dp[n]<<endl;
	vi v;
	int x=n;

	while(x>1)
	{
		v.pb(x);
		if(x%3==0&&dp[x]-1 == dp[(x/3)])x=(x/3);
		else if(x%2==0&&dp[x]-1 == dp[(x/2)])x=(x/2);
		else if(dp[x]-1==dp[x-1])x=x-1;
	}
	v.pb(1);
	// tr(it,v)cout<<*it<<" ";
	for(auto it = v.rbegin();it<v.rend();it++)
		cout<<*it<<" ";
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


