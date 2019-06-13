#include <iostream>
using namespace std;
int main () {
	int n, m, a, b;
	cin >> n >> m;
	int cv[n][m];
	int tt[n];
	int nc[n];
	int i, continua, aux, fim = n;

	//Reset dos totais
	for (int z = 0; z < n; z++) {
		tt[z] = 0;
	}
	//Entrada dos tempos das voltas
	for (int c = 0; c < n; c++) {
		for (int v = 0; v < m; v++) {
			cin >> cv[c][v];
		}
	}
	//Soma dos tempos (totais)
	for (int c = 0; c < n; c++) {
		for (int v = 0; v < m; v++) {
			tt[c] += cv[c][v];
			nc[c] = tt[c];
		}
	}
	//Ordenação
	do{
		continua = 0;
		for(i = 0; i < fim-1; i++) {
			if(tt[i] > tt[i+1]) {
				aux = tt[i];
				tt[i] = tt[i+1];
				tt[i+1] = aux;
				continua = i;
			}
		}
		fim--;
	}
	while(continua != 0);
	//Cout
	for (int z = 0; z < 3; z++) {
		for (int w = 0; w < n; w++) {
			if (tt[z] == nc[w]) {
				cout << w+1 << endl;
			}
		}
	}
return 0;
}
