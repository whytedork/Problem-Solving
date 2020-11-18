#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define fl(i,s,e) for(int i = s; i < e; i++)

//program to find a unique number in array where all number except one, are present thrice

bool getBit(int n, int pos) {
	return ((n & (1 << pos)) != 0);
}

int setBit(int n, int pos) {
	return (n | (1 << pos));
}


int unique(int arr[], int n) {
	int result = 0;
	fl(i, 0, 64) {
		int sum = 0;
		fl(j, 0, n) {
			if (getBit(arr[j], i))
				sum++;
		}
		if (sum % 3 != 0) {
			result = setBit(result, i);
		}
	}
	return result;
}

int main() {
	int a[] = {1, 1, 2, 2, 3, 4, 4, 1, 2, 4};
	int n = sizeof(a) / sizeof(int);

	cout << unique(a, n) << endl;

	return 0;
}