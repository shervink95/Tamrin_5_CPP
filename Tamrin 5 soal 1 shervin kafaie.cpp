#include <iostream>

using namespace std;

int main()
{
	int a[100][100], i, j, k;
	cout << "lotfan yek add vared konid:\n";
	cin >> k;
	for (i = 0; i < 100; i++) {
		for (j = 0; j < 100; j++) {
			a[i][j] = -1;
		}
	}
	for (i = 0; i < k; i++) {
		for (j = 0; j <= i; j++) {
			if ((j == 0) || (j == i)) {
				a[i][j] = 1;
			}
			else {
				a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
			}
		}
	}
	for (i = 0; i < k; i++) {
		for (j = 0; a[i][j]; j++) {
			if (a[i][j] > 0) {
				cout << a[i][j] << "  ";
			}
			else {
				break;
			}
		}
		cout << endl;
	}
	return 0;
}