#include <iostream>
using namespace std;
int main () {
	for (int a = 1;;){
		int x, y;
		cin >> x >> y;
		if (x > 0 && y > 0){
			int logo[x][y];
			//Place matriz logo
			for (int i = 0; i < x; i++) {
				for (int j = 0; j < y; j++) {
					cin >> logo[i][j];
				}
			}
			int n, l, c;
			cin >> n >> l >> c;
			int matriz[l][c];
			//Place matrizes
			for (int z = 0; z < n; z++){
				for (int i = 0; i < l; i++) {
					for (int j = 0; j++) {
						cin >> matriz[i][j];
					}
				}
			}
		}
		else {
			break;
		}
	}
return 0;
}