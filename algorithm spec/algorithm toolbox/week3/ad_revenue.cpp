// #include<bits/stdc++.h>
// using namespace std;
// // #define int long long
// #define ll long long
// #define sz(a) (int)(a.size())
// #define pb push_back
// #define all(c) c.begin(),c.end()
// #define tr(it,c) for(auto it=c.begin();it!=c.end();it++)
// #define fr(i,n) for(int i=0;i<n;i++)
// #define present(c,x) (c.find(x)!=c.end()) //for set/map etc.
// #define cpresent(c,x) (find(all(c),x)!=c.end())
// typedef pair<int,int> pi;
// typedef vector<int> vi;
// typedef vector<pair<int,int>> vp;
// int N=100001;
// int mod=1e9+7;
// int min(int a,int b){if(a<b) return a; else return b;}
// int max(int a,int b){if(a>b) return a; else return b;}
// int power(int a,int b){int res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
// int gcd(int p, int q){if(p%q==0) return q; else{return gcd(q,p%q);}} 
// bool comp(int a, int b) 
// { 
//     return (a < b); 
// }

// typedef struct cup
// {
//     int v;
//     int w;
// }cup;

// bool comp1(cup cup1,cup cup2)
// {
//     return (cup1.v/cup1.w)>(cup2.v/cup2.w);
// }
// void solve()
// {
//     int n;
//     cin>>n;
//     vi a(n),b(n);
//     ll ans=0;
//     fr(i,n)
//     {
//         cin>>a[i];
//     }
//     fr(i,n)
//     {
//         cin>>b[i];
//     }
//     sort(all(a));
//     sort(all(b));
//     fr(i,n)
//     ans=ans+ a[i]*b[i];
    
//     cout<<ans<<endl;

// }

// int main()
// {
//     // #ifndef ONLINE_JUDGE
//     // freopen("input.txt","r",stdin);
//     // freopen("output.txt","w",stdout);
//     // #endif
//     // int t;
//     // cin>>t;
//     // while(t--)
//     // {
//     //  solve();
//     //  cout<<endl;
//     // }
//     solve();
//     return 0;
    
// }



#include <iostream>
#include <cmath>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <iomanip>
#include <assert.h>
#include <vector>
#include <cstring>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <set>
#include <complex>
#include <list>
#include <climits>
#include <cctype>
#include <bitset>
#include <numeric>
#include <array>
#include <tuple>
#include <stdexcept>
#include <utility>
#include <functional>
#include <locale>
#define all(v) v.begin(), v.end()
#define mp make_pair
#define pb push_back
#define endl '\n'

typedef long long int ll;

// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);

using namespace std;
int CalcIt(vector<int> Profit, vector<int> Clicks, int n);
int main() {
  int n;
  cin >> n;
  vector<int> Profit(n);
  vector<int> Clicks(n);
  for (int i = 0; i < n; i++) cin >> Profit[i];
  for (int i = 0; i < n; i++) cin >> Clicks[i];
  cout << CalcIt(Profit, Clicks, n) << endl;
}
int CalcIt(vector<int> Profit, vector<int> Clicks, int n) {
  sort(Profit.begin(), Profit.end());
  sort(Clicks.begin(), Clicks.end());
  int Sum = 0;
  for (int i = 0; i < n; i++) {
    Sum += Profit[i] * Clicks[i];
  }
  return Sum;
}