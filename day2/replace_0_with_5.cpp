#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int replaced(int num) {
	//base case
	if (num == 0)
		return 5;

	int decimal_place = 1, result = 0;
	int a = num;
	while (num != 0) {
		if (num % 10 == 0)
			result += decimal_place * 5;
		num = num / 10;
		decimal_place *= 10;
	}

	return a + result;
}

int main() {
	int n;
	cin >> n;
	int new_n = replaced(n);
	cout << new_n << endl;
	return 0;
}
