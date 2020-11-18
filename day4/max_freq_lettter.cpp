#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fl(i,s,e) for(int i=s;i<e;i++)

int main() {
	string str;
	cin >> str;
	int freq[26];

	fl(i, 0, 26) {
		freq[i] = 0;
	}

	fl(i, 0, str.size()) {
		freq[str[i] - 'a']++;
	}

	char ans = 'a';
	int maxF = 0;

	fl(i, 0, 26) {
		if (freq[i] > maxF) {
			maxF = freq[i];
			ans = i + 'a';
		}
	}

	cout << ans << " " << maxF << endl;

	return 0;
}