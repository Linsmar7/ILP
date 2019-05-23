#include <iostream>
using namespace std;
int main () {

int n, mi, ma, nu;
	cin >> n >> mi >> ma >> nu;
char senha[1001];
	cin >> senha;
int miStorage = 0;
int maStorage = 0;
int nuStorage = 0;
int li = 0;

for (int i = 0; ; i++) {
	if (senha[i] >= 'a' && senha[i] <= 'z') {
		li++;
	}
	else if (senha[i] >= 'A' && senha[i] <= 'Z') {
		li++;
	}
	else if (senha[i] >= '0' && senha[i] <= '9') {
		li++;
	}
	else {
		break;
	}
}
for (int i = 0; i < li; i++) {

	if (senha[i] >= 'a' && senha[i] <= 'z') {
		miStorage++;
	}
	else if (senha[i] >= 'A' && senha[i] <= 'Z') {
		maStorage++;
	}
	else if (senha[i] >= '0' && senha[i] <= '9') {
		nuStorage++;
	}

}
if (li >= n && miStorage >= mi && maStorage >= ma && nuStorage >= nu) {
cout << "Ok =/" << endl;
}
else {
cout << "Ufa :)" << endl;
}

return 0;
}
