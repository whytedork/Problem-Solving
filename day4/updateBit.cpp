#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	int n, pos, val;
	cout << "Enter no :";
	cin >> n;
	cout << "Enter position:";
	cin >> pos;
	cout << "Enter value:";
	cin >> val;

	int mask = ~(1 << pos);

	n = n & mask; //value after clear bit

	cout << ((val << pos) | n) << endl;

	return 0;
}
