#include <iostream>

using namespace std;

int main()
{
	char a[1000];
	char b;
	b = ' ';
	int i, siz, m = 1;
	cout << "lotfan yek jomle vared konid:\n";
	gets_s(a);
	for (siz = 0; a[siz]; siz++);
	for (i = 0; a[i]; i++) {
		if (a[i] == b) {
			m++;
		}
	}
	cout << "tedad kalamat:  " << m << endl;
	return 0;
}