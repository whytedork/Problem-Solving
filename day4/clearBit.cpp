#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	int n, pos;
	cout << "Enter no :";
	cin >> n;
	cout << "Enter position:";
	cin >> pos;

	int mask = ~(1 << pos);

	cout << (mask & n) << endl; //set bit to 0 to given position

	return 0;
}
