#include <iostream>
using namespace std;
int main () {
	int n, m, movs = 0;
	int tabuleiro[8][8];
	// COords buraco = (3,1),(3,2),(5,2),(4,5)
	//Cavalo = (4,3)
	int cL = 3;
	int cC = 4;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m;
			if (m == 1) {
				cL += 2;
				cC += 1;
				if 	((cL == 3 && cC == 1) ||
					 (cL == 3 && cC == 2) ||
					 (cL == 5 && cC == 2) ||
					 (cL == 4 && cC == 5)){
					movs++;
					break;
				}
				else {
					movs++;
				}
			}
			if (m == 2) {
				cL += 1;
				cC += 2;
				if 	((cL == 3 && cC == 1) ||
					 (cL == 3 && cC == 2) ||
					 (cL == 5 && cC == 2) ||
					 (cL == 4 && cC == 5)){
					movs++;
					break;
				}
				else {
					movs++;
				}
			}
			if (m == 3) {
				cL -= 1;
				cC += 2;
				if 	((cL == 3 && cC == 1) ||
					 (cL == 3 && cC == 2) ||
					 (cL == 5 && cC == 2) ||
					 (cL == 4 && cC == 5)){
					movs++;
					break;
				}
				else {
					movs++;
				}
			}
			if (m == 4) {
				cL -= 2;
				cC += 1;
				if 	((cL == 3 && cC == 1) ||
					 (cL == 3 && cC == 2) ||
					 (cL == 5 && cC == 2) ||
					 (cL == 4 && cC == 5)){
					movs++;
					break;
				}
				else {
					movs++;
				}
			}
			if (m == 5) {
				cL -= 2;
				cC -= 1;
				if 	((cL == 3 && cC == 1) ||
					 (cL == 3 && cC == 2) ||
					 (cL == 5 && cC == 2) ||
					 (cL == 4 && cC == 5)){
					movs++;
					break;
				}
				else {
					movs++;
				}
			}
			if (m == 6) {
				cL -= 1;
				cC -= 2;
				if 	((cL == 3 && cC == 1) ||
					 (cL == 3 && cC == 2) ||
					 (cL == 5 && cC == 2) ||
					 (cL == 4 && cC == 5)){
					movs++;
					break;
				}
				else {
					movs++;
				}
			}
			if (m == 7) {
				cL += 1;
				cC -= 2;
				if 	((cL == 3 && cC == 1) ||
					 (cL == 3 && cC == 2) ||
					 (cL == 5 && cC == 2) ||
					 (cL == 4 && cC == 5)){
					movs++;
					break;
				}
				else {
					movs++;
				}
			}
			if (m == 8) {
				cL += 2;
				cC -= 1;
				if 	((cL == 3 && cC == 1) ||
					 (cL == 3 && cC == 2) ||
					 (cL == 5 && cC == 2) ||
					 (cL == 4 && cC == 5)){
					movs++;
					break;
				}
				else {
					movs++;
				}
			}
	}
	cout << movs << endl;
return 0;
}