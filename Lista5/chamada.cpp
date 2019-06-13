#include <iostream>
using namespace std;
int main () {
	int n, k;
	cin >> n >> k;
	string name[n];
	int z, continua, fim = n;
	string aux;
		//Entrada dos nomes
		for (int i = 0; i < n; i++) {
			cin >> name[i];
		}
		//Ordenação
		do {
			continua = 0;
			for (z = 0; z < fim-1; z++) {
				if(name[z] > name[z+1]) {
					aux = name[z];
					name[z] = name[z+1];
					name[z+1] = aux;
					continua = z;
				}
			}
			fim --;
		}while(continua != 0);
		//Saida
		cout << name[k-1] << endl;
return 0;
}
