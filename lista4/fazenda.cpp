#include <iostream>
using namespace std;
char fazenda[1502][1502];
int main () {
	for (;;) {
	int n = 0, x = 0, y = 0, l = 0, c = 0, q = 0;
	int cerca = 0;
	cin >> n;
			
	//Placing
		if (n > 0) {
			for (int m = 0; m < n; m++) {
				cin >> x >> y >> l >> c;
				for (int i = y; i < y+c; i++) {
					for (int j = x; j < x+l; j++) {
						fazenda[i][j] = '1';
					}
				}
			}
			//Contagem
			cerca = 0;
			for (int i = 0; i < 1502; i++) {
				for (int j = 0; j < 1502; j++) {
					if (fazenda[i][j] == '1') {
						q++;
					}
				}
			}
			//Cercas
			for (int i = 0; i < 1502; i++) {
				for (int j = 0; j < 1502; j++) {
					if (fazenda[i][j] == '1' && fazenda[i-1][j] != '1'){
						cerca++;
					}
					if (fazenda[i][j] == '1' && fazenda[i+1][j] != '1') {
						cerca++;
					}
					if (fazenda[i][j] == '1' && fazenda[i][j-1] != '1') {
						cerca++;
					}
					if (fazenda[i][j] == '1' && fazenda[i][j+1] != '1') {
						cerca++;
					}
				}
			}
		}
		else {
			break;
		}
		cout << q << " " << cerca << endl;
			//Reset
			for (int i = 0; i < 1502; i++) {
				for (int j = 0; j < 1502; j++) {
					fazenda[i][j] = '0';
				}
			}
			cerca = 0;
			q = 0;
	}
return 0;
}