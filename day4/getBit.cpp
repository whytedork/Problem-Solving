#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	int n, pos;

	cout << "Enter no :";
	cin >> n;
	cout << "Enter position:";
	cin >> pos;
	if (((1 << pos) & n) != 0)  // x << y = x*2^y
		cout << 1 << endl;
	else
		cout << 0 << endl;

	return 0;
}
