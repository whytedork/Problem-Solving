#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define fl(i,s,e) for(int i = s; i < e; i++)

//find unique numbers in an array - only two unique numbers in array are present

bool setBit(int n, int pos) {
	return ((n & (1 << pos)) != 0);
}

int main() {
	int a[] = {1, 2, 2, 3, 4, 5, 1, 3};
	int n = sizeof(a) / sizeof(int);
	int unique1 = 0;
	int unique2 = 0;
	int xorsum = 0;
	fl(i, 0, n) {
		xorsum = xorsum ^ a[i];
	}

	int tempxor = xorsum;

	int pos = 0;
	int setbit = 0;
	while (setbit != 1) {
		setbit = xorsum & 1;
		pos++;
		xorsum = xorsum >> 1;
	}

	fl(i, 0, n) {
		if (setBit(a[i], pos - 1)) { //pos value will be incremented 1 times more before exit from loop
			unique1 = unique1 ^ a[i];
		}
	}

	unique2 = unique1 ^ tempxor;
	cout << unique1 << " " << unique2 << endl;

	return 0;
}
