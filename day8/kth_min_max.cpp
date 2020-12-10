#include <bits/stdc++.h>
using namespace std;

void OnlineJudge() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int kth_max(vector<int>a, int n, int k) {
	make_heap(a.begin(), a.end());
	for (int i = 1; i < k; i++) {
		pop_heap(a.begin(), a.end());
		a.pop_back();
	}
	return a[0];
}

int kth_min(vector<int>a, int n, int k) {
	make_heap(a.begin(), a.end());
	for (int i = 1; i < n - k + 1; i++) {
		pop_heap(a.begin(), a.end());
		a.pop_back();
	}
	return a[0];

}


int main() {
	OnlineJudge();
	int n = 6, k;  //k>0 and k<n
	vector<int>a(n);
	a = {10, 5, 7, 9, 12, 24};
	cin >> k;
	cout << kth_max(a, n, k) << endl;
	cout << kth_min(a, n, k) << endl;
	return 0;
}
