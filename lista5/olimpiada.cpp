#include <iostream>
using namespace std;
int main () {
int p, m;
cin >> p >> m;
int pais[p];
int indice[p];
int g, s, b, desa = 0;
int z, continua, aux, fim = p;
	//Zerar o vetor
	for (int i = 0; i < p; i++) {
		pais[i] = 0;
	}
	for (int i = 0; i < p; i++) {
		indice[i] = 0;
	}
	//Adicionar medalhas no vetor
	for (int i = 0; i < m; i++) {
		cin >> g >> s >> b;
		pais[g-1]++;
		pais[s-1]++;
		pais[b-1]++;
		indice[g-1]++;
		indice[s-1]++;
		indice[b-1]++;
	}
	//Ordenação
	do{
		continua = 0;
		for(z = 0; z < fim-1; z++) {
			if(pais[z] < pais[z+1]) {
				aux = pais[z];
				pais[z] = pais[z+1];
				pais[z+1] = aux;
				continua = z;
			}
		}
		fim--;
	}
	while(continua != 0);
	//Cout
	for (int i = 0; i < p; i++) {
		if (desa == p) {
				break;
		}
		for (int j = 0; j < p; j++) {
			if (pais[i] == indice[j] && pais[i] != pais[i+1]) {
				cout << j+1 << " ";
				desa++;
			}
			if (desa == p) {
				break;
			}
		}
	}
	cout << endl;
	return 0;
}