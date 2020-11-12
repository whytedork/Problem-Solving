/*
hollow_full_pyramid

     *
    * *
   *   *
  *     *
 *       *
***********


*/

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = i; j < n; j++)
		{
			cout << " ";

		}
		for (int k = 1; k <= 2 * i - 1; k++) {
			if (i == n || k == 1 || k == (2 * i - 1))
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}