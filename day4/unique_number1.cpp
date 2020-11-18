#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define fl(i,s,e) for(int i = s; i < e; i++)

//find unique number in an array - only one unique number is in array
int main() {
	int a[] = {1, 1, 2, 3, 2, 3, 4, 4, 5, 5, 6};
	int n = sizeof(a) / sizeof(int);
	int unique = 0;
	fl(i, 0, n) {
		unique = unique ^ a[i];
	}

	cout << unique << endl;

	return 0;
}
