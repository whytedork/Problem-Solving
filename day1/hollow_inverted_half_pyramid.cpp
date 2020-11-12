/*
inverted_hollow_half_pyramid

* * * * * *
*       *
*     *
*   *
* *
*

*/

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = n; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			if (i == n) cout << "* ";
			else if (j == 1 or j == i) cout << "* ";
			else cout << "  ";
		}

		cout << endl;
	}
	return 0;
}