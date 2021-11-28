#include <iostream>

using namespace std;

int main()
{
	int n, m, i, j, k;
	cout << "lotfan n,m ra vared konid:\n";
	cin >> n >> m;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			k = i * j;
			cout << k << "  ";
		}
		cout << endl;
	}
	return 0;
}