#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	int n;
	cout << "enter length of word: ";
	cin >> n;
	cout << "enter word: ";
	char arr[n + 1];
	cin >> arr;
	bool palindrome = true;
	for (int i = 0; i < n; i++) {
		if (arr[i] != arr[n - 1 - i])
		{
			palindrome = false;
			break;
		}
	}

	if (palindrome == true)
		cout << "palindrome" << endl;
	else
		cout << "not palindrome" << endl;

	return 0;
}
