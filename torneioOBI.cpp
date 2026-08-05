#include <iostream>
using namespace std;

int main() {
	char letras[6];
	int vitorias;

	for (int i = 0; i < 6; i++) {
		cin >> letras[i];
		if (letras[i] == 'V') {
			vitorias++;
		}
	}

	if (vitorias == 1 || vitorias == 2) {
		cout << 3;
	}
	else if (vitorias == 3 || vitorias == 4) {
		cout << 2;
	}
	else if (vitorias == 2 || vitorias == 1) {
		cout << 1;
	}
	else {
		cout << -1;
	}
	return 0;
}
