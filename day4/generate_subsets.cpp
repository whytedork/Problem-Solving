#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define fl(i,s,e) for(int i = s; i < e; i++)

void subsets(int arr[], int n) {
	fl(i, 0, (1 << n)) { // loop till 2^n
		fl(j, 0, n) {
			if (i & (1 << j) ) { //if jth bit is set print jth value
				cout << arr[j] << " ";
			}
		}
		cout << endl;
	}
}

int main() {
	int a[] = {1, 2, 3, 4};
	int n = sizeof(a) / sizeof(int);
	subsets(a, n);
	return 0;
}
