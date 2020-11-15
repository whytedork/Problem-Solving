#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

//convert all lower case word to upper case
int main() {
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	cout << str << endl;
	return 0;
}
