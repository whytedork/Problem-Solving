#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag,
        tree_order_statistics_node_update>
        pbds;


#define lli long long int
#define endl "\n"
#define vi vector<lli>
#define vs vector<string>
#define pb emplace_back
#define pob pop_back
#define mp make_pair
#define pii pair<lli,lli>
#define mt make_tuple
#define rand 100
#define ff first
#define ss second
#define ll back
#define loop(i,s,e) for(lli i = s; i <= e; i++)
#define loop_prev(i,s,e) for(lli i = s; i >= e; i--)
#define w(x) int x; cin>>x; while(x--)
#define printarr(a,s,e) for(lli i=s;i<=e;i++) cout << a[i] << ""; cout << endl;
#define mod 1000000007
#define np next_permutation
#define setbits(x) __builtin_popcountll(x)
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void OnlineJudge() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

vi add(vi x, vi y) {
	vi ans;
	reverse(x.begin(), x.end());
	reverse(y.begin(), y.end());
	lli len = min(x.size(), y.size());
	lli carry = 0;
	loop(i, 0, len - 1) {
		lli val = x[i] + y[i] + carry;
		carry = val / 10;
		ans.pb(val % 10);
	}
	if (x.size() > len) {
		loop(i, len, x.size() - 1) {
			lli val = x[i] + carry;
			carry = val / 10;
			ans.pb(val % 10);
		}
	}
	if (y.size() > len) {
		loop(i, len, y.size() - 1) {
			lli val = y[i] + carry;
			carry = val / 10;
			ans.pb(val % 10);
		}
	}
	while (carry) {
		ans.pb(carry % 10);
		carry /= 10;
	}
	reverse(ans.begin(), ans.end());
	return ans;
}

int main() {
	fastIO;
	OnlineJudge();
	w(t) {
		string a, b;
		cin >> a >> b;
		vi s;
		vi d;
		loop(i, 0, a.size() - 1) {
			s.pb(a[i] - '0');
		}
		loop(i, 0, b.size() - 1) {
			d.pb(b[i] - '0');
		}
		vi sum = add(s, d);
		printarr(sum, 0, sum.size() - 1);
	}

	return 0;
}
