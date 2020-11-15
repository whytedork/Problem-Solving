#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

//largest word in a sentence
int main() {
	int n;
	cin >> n;
	cin.ignore();
	char arr[n + 1];
	cin.getline(arr, n);
	cin.ignore();

	int i = 0;
	int curLen = 0, maxLen = 0;
	int start = 0, maxStart = 0;
	while (1) {
		if (arr[i] == ' ' || arr[i] == '\0')
		{
			if (curLen > maxLen)
			{
				maxLen = curLen;
				maxStart = start;
			}
			curLen = 0;
			start = i + 1;
		}

		else
		{
			curLen++;
		}


		if (arr[i] == '\0')
			break;
		i++;
	}

	cout << maxLen << endl;
	for (int i = 0; i < maxLen; i++) {
		cout << arr[i + maxStart];
	}
	cout << endl;
	return 0;
}
