#include <bits/stdc++.h>
using namespace std;

//Maximum sum such that no two elements are adjacent

#define endl "\n"
#define fli(i,s,e) for(int i = s; i < e; i++)
#define w(x) int x; cin>>x; while(x--)

void OnlineJudge() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int FindMaxSum(int arr[], int n)
{
	int incl = arr[0];
	int excl = 0;
	int excl_new;

	for (int i = 1; i < n; i++)
	{
		/* current max excluding i */
		excl_new = (incl > excl) ? incl : excl;

		/* current max including i */
		incl = excl + arr[i];
		excl = excl_new;
	}

	/* return max of incl and excl */
	return ((incl > excl) ? incl : excl);
}

int main()
{
	OnlineJudge();
	int n; cin >> n;
	int arr[n];

	fli(i, 0, n) {
		cin >> arr[i];
	}

	cout << FindMaxSum(arr, n) << endl;
	return 0;
}
