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

    ll n;
    string s;
    cin >> n >> s;
    int x{}, y{};
    set<pair<ll, ll>> st; // key of coords and value of how many times visited
    st.insert({0, 0});
    for(ll i = 0; i < n; i++) {
        if(s[i] == 'R') {
            x++;
        } else if(s[i] == 'L') {
            x--;
        } else if(s[i] == 'U') {
            y++;
        } else {
            y--;
        }
		st.insert({x, y});
        if(st.count({x, y}) != 0) {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}