#include <iostream>
using namespace std;
int main () {
char n[1001];
int soma = 0;
int d, x;
for (;;) {
	cin >> n;
	d = 0;
	x = 0;
		for (int j = 0; j < 1001; j++) {
			if (n[j] == '0' && n[j] != '\0') {
				d++;
			}
			else if (n[j] == '\0') {
				break;
			}
		}
		for (int c = 0; c < 1001 ;c++) {
			if (n[c] != '\0') {
				x++;
			}
			else {
				break;
			}
		}
		if (d == x) {
			break;
		}
		else {
			soma = 0;
				for (int i = 0; i < 1001; i++) {
					if (i%2 == 0 && n[i] != '\0') {
						soma += n[i] - '0';
					}
					else if ( i%2 != 0 && n[i] != '\0') {
						soma -= n[i] - '0';
					}
					else {
						break;
					}
				}
			if (soma%11 == 0) {
				cout << n << " is a multiple of 11." << endl;
			}
			else {
				cout << n << " is not a multiple of 11." << endl;
			}
		}
}
return 0;	
}
