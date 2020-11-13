/*
      1

     1 1

    1 2 1

   1 3 3 1

  1 4 6 4 1

 1 5 10 10 5 1

*/
#include <iostream>
using namespace std;
int main()
{
	int rows, coef = 1, space, i, j;
	cout << "Enter the number of rows : ";
	cin >> rows;
	cout << endl;

	for (i = 0; i < rows; i++)
	{
		for (space = 1; space <= rows - i; space++)
			cout << " " ;

		for (j = 0; j <= i; j++)
		{
			if (j == 0 || i == 0)
				coef = 1;
			else
				coef = coef * (i - j + 1) / j;

			cout << coef << " ";
		}
		cout << endl;
		cout << endl;
	}

	return 0;
}