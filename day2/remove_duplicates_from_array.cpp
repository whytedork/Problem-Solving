#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

// array is sorted

int remove_duplicates(int arr[], int n) {
	//base case
	if (n == 0 || n == 1)
		return n;

	int j = 0; //to store the index of next unique element

	for (int i = 0; i < n - 1; i++) {
		if (arr[i] != arr[i + 1])
			arr[j++] = arr[i];
	}

	arr[j++] = arr[n - 1];
	return j;

}

int main() {
	int n;
	cout << "Enter no. of elements in array : ";
	cin >> n;
	int arr[n];
	cout << "Enter elements in array : ";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int size = remove_duplicates(arr, n);

	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}
