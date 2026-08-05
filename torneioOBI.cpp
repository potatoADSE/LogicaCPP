#include <iostream>
using namespace std;

int main() {
	char letras[6];
	int vitorias = 0;

	for (int i = 0; i < 6; i++) {
		cin >> letras[i];
		if (letras[i] == 'V') {
			vitorias++;
		}
	}

	if (vitorias == 1 || vitorias == 2) {
		cout << 3 << endl;
	}
	else if (vitorias == 3 || vitorias == 4) {
		cout << 2 << endl;
	}
	else if (vitorias == 5 || vitorias == 6) {
		cout << 1 << endl;
	}
	else {
		cout << -1 << endl;
	}
	return 0;
}
