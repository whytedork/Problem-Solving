#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	int n, pos;

	cout << "Enter no :";
	cin >> n;
	cout << "Enter position:";
	cin >> pos;
	cout << ((1 << pos) | n) << endl; //set bit 1 to given position

	return 0;
}
