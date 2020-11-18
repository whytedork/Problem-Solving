#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int main() {

	int n;
	cin >> n;
	int counts = 0;
	while (n != 0) {
		n = n & n - 1;
		counts++;
	}

	cout << counts << endl;

	return 0;
}
