#include <iostream>
using namespace std;
int main () {
	int l, c, q = 0;
	cin >> l >> c;
	char m[l][c];
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < c; j++) {
			cin >> m[i][j];
		}
	}
	q = 0;
	for (int i = 1; i < l-1; i++) {
		for (int j = 1; j < c-1; j++) {
			if (m[i][j] == '#' && m[i-1][j] == '.') {
				q++;
			}
			else if(m[i][j] == '#' && m[i+1][j] == '.') {
				q++;
			}
			else if(m[i][j] == '#' && m[i][j-1] == '.') {
				q++;
			}
			else if(m[i][j] == '#' && m[i][j+1] == '.') {
				q++;
			}
		}
	}
	// Contar os '#' nos cantos
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < c; j++) {
			if (m[i][j] == '#' && i == 0) {
				q++;
			}
			else if (m[i][j] == '#' && i == l-1) {
				q++;
			}
			else if (m[i][j] == '#' && j == 0) {
				q++;
			}
			else if (m[i][j] == '#' && j == c-1) {
				q++;
			}
		}
	}
	cout << q << endl;
return 0;
}