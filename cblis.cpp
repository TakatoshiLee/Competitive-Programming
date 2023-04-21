#include "bits/stdc++.h"
//#include "debugging.h"
using namespace std;

//#define dbg(v) \
	//cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
	
#define ll long long
#define ld long double

#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

#define print1D(A) for (int k=0;k<A.size();k++) cout << A[k] << ((k==A.size()-1) ?'\n':' ')
#define print2D(A) for (int i=0;i<A.size();i++) print1D(A[i])


template<class H, class... T> void DBG(H h, T... t) {
	cerr << to_string(h);
	if(sizeof...(t))
		cerr << ", ";
	DBG(t...);
}
#ifdef _DEBUG
#define dbg(...) cerr << "LINE(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)
#else
#define dbg(...) 0
#endif

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	//freopen("speed.in", "r", stdin);
	//freopen("speed.out", "w", stdout);
	int n;
	cin >> n;
	vector<int> v;
	int maxNum{};
	for(int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	vector<int> dp;
	dp.assign(n, 1);
	for(int i = 1; i < n; i++) {
		for(int j = 0; j < i; j++) {
			if(v[j] < v[i]) {
				dp[i] = max(dp[j] + 1, dp[i]);
				if(dp[i] > maxNum) {
					maxNum = dp[i];
				}
			}
			//for(auto k : dp){
				//cout << k << " ";
			//} cout << "\n";
		} //cout << "\n";
		
	}
	
	cout << maxNum;
}