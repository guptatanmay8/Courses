#include<bits/stdc++.h>
using namespace std;
// #define int long long
#define ll long long
#define sz(a) (int)(a.size())
#define pb push_back
#define all(c) c.begin(),c.end()
#define tr(it,c) for(auto it=c.begin();it!=c.end();it++)
#define fr(i,n) for(int i=0;i<n;i++)
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

typedef struct cup
{
    int v;
    int w;
}cup;

bool comp1(cup cup1,cup cup2)
{
    return (cup1.v/cup1.w)>(cup2.v/cup2.w);
}
void solve()
{
    int n,w;
    cin>>n>>w;
    vector<cup> v(n);
    // vi wt(n);
    // vi vw(n);
    fr(i,n)
    {
        cin>>v[i].v>>v[i].w;
        // vw[i]=v[i]/wt[i];

    }
    sort(all(v),comp1);
    int i=0;
    int rem=w;
    double ans=0;   
    // while(rem>0&&i<n)
    // {
    //     if(v[i].w<rem)
    //     {
    //         ans=ans+ double(v[i].v);
    //         rem=rem-v[i].w;
    //     }
    //     else
    //     {
    //         ans= ans+ (double(v[i].v)/v[i].w)*rem;
    //         rem=0;
    //     }
    //     i++;
    // }
    for(int i=0;i<n&&w>0;i++)
    {
        ans= ans + min(w,v[i].w)*double(v[i].v)/v[i].w;
        w=w- min(w,v[i].w);
    }
    cout<<ans;

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
    //  solve();
    //  cout<<endl;
    // }
    solve();
    return 0;
    
}

// #include <iostream>
// #include <cmath>
// #include <string>
// #include <string.h>
// #include <stdlib.h>
// #include <algorithm>
// #include <iomanip>
// #include <assert.h>
// #include <vector>
// #include <cstring>
// #include <map>
// #include <deque>
// #include <queue>
// #include <stack>
// #include <sstream>
// #include <cstdio>
// #include <cstdlib>
// #include <ctime>
// #include <set>
// #include <complex>
// #include <list>
// #include <climits>
// #include <cctype>
// #include <bitset>
// #include <numeric>
// #include <array>
// #include <tuple>
// #include <stdexcept>
// #include <utility>
// #include <functional>
// #include <locale>
// #define     all(v)            v.begin(),v.end()
// #define     mp                     make_pair
// #define     pb                     push_back
// #define     endl                     '\n'

// typedef   long long int               ll;

// //freopen("input.txt","r",stdin);
// //freopen("output.txt","w",stdout);

// using namespace std;
// int main() {
// 	int n, SizeOfKnapSack; 
// 	cin >> n >> SizeOfKnapSack;
// 	vector<pair<int, int>> Value_Wigth(n); 
// 	vector<pair<double,int>> ValuePerUnit(n); 
// 	for (int i = 0; i < n; i++) {
// 		cin >> Value_Wigth[i].first >> Value_Wigth[i].second;
// 		ValuePerUnit[i].first = 1.0 * Value_Wigth[i].first / Value_Wigth[i].second; 
// 		ValuePerUnit[i].second = Value_Wigth[i].second;
// 	}
// 	sort(ValuePerUnit.begin(), ValuePerUnit.end(),greater<pair<double,int>>());
// 	double Res = 0;
// 	for (int i = 0; i < ValuePerUnit.size() && SizeOfKnapSack>0; i++) {
// 		Res += min(ValuePerUnit[i].second, SizeOfKnapSack)*ValuePerUnit[i].first;
// 		SizeOfKnapSack -= min(ValuePerUnit[i].second, SizeOfKnapSack); 
// 	}
// 	cout << fixed << setprecision(4) << Res << endl;
// }

