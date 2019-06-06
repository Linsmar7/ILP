#include <iostream>
using namespace std;
int main () {
	int n, m, a, b, i, j;
	cin >> n >> m;
	int cv[n][m];
	int tt[n];
	int menor_i, aux;
	int compi[3];

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
		}
	}
	//Ordenação
	for(j = 0; j < n-1; j++){ 
		menor_i = j;
		for(i = j+1; i < n; i++){
			if(tt[i] < tt[menor_i]){
				menor_i = i;
			}
		}
		aux = tt[j];
		tt[j] = tt[menor_i];
		tt[menor_i] = aux;
	}
	//Cout
	for (int z = 0; z < 3; z++) {
		cout << compi[z]+1 << endl;
	}
return 0;
}
