#include <iostream>
#include <vector>
using namespace std;

int main() {
	int qnt;
	cin >> qnt;
	vector <int> numeros(qnt);

	for (int i = 0; i < qnt; i++) {
		cin>>numeros[i];
	}
	for (int i = 0; i < qnt - 1; i++) {
		int changes = 0;
		for (int i = 0; i < qnt - 1; i++) {
			if (numeros[i] > numeros[i + 1]) {
				int hand;
				hand = numeros[i + 1];
				numeros[i + 1] = numeros[i];
				numeros[i] = hand;
				changes++;
			}
		}
		if (changes == 0) {
			break;
		}
		
		
	}
	for (int i = 0; i < qnt; i++) {
		cout << numeros[i] << " ";
	}
	cout << "\n";

	return 0;
}
