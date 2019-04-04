#include <bits/stdc++.h>

#define _for(i,a,b) for (int i=(a),_b_=(b);i<_b_;i++)
#define _fod(i,a,b) for (int i=(a),_b_=(b);i>_b_;i--)
#define _it(i,v) for (typeof((v).begin()) i = (v).begin(); i != (v).end(); ++i)
#define _all(v) v.begin(), v.end()
#define __(v) memset(v,0,sizeof(v))
#define INF -10000000
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
template<typename T> vector<T> &operator += (vector<T> &v, T x) {v.push_back(x);return v;}




void solve() {
	int a,b,c;	
	int n;
	cin>>n;
	int dp[n+1];
	cin>>a>>b>>c;
	memset(dp,INF,sizeof(dp));
	dp[0] = 0;
	_for(i,a,n+1) dp[i] = max(dp[i],dp[i-a]+1);
	_for(i,b,n+1) dp[i] = max(dp[i],dp[i-b]+1);
	_for(i,c,n+1) dp[i] = max(dp[i],dp[i-c]+1);
	cout<<dp[n];
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    #ifdef HIEUNV
    freopen("input.txt","r",stdin);
//  freopen("output.txt","w",stdout);
    #endif
    solve();
}


