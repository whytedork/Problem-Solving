#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

//given number is power of 2 or not

bool ispower2(ll n) {
	return (n && !(n & (n - 1))); //handle corner case if n = 0
}

int main() {
	ll n;
	cin >> n;
	cout << ispower2(n) << endl;

	return 0;
}
