/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
#include <iostream>
using namespace std;

int main()
{
	int rows;
	int num = 1;
	cout << "Enter rows : ";
	cin >> rows;
	for (int i = 1; i <= rows; i++)
	{
		for (int j = 1; j <= i; j++) {
			cout << num << " ";
			num++;
		}
		cout << endl;
	}
	return 0;
}
