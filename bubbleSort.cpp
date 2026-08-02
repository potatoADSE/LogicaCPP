#include <iostream>
using namespace std;

int main() {

	int lista [5];
	for (int i = 0; i <= 4; i++) {
		cin>>lista[i];
	}

	for (int i = 0; i <= 3; i++) {
		int changes = 0;
		for (int j = 0; j <= 3; j++) {
			if (lista[j] > lista[j+1]) {
				int hand = 0;
				hand = lista[j+1];
				lista[j+1] = lista[j];
				lista[j] = hand;
				changes ++;
			}
		}
		if (changes == 0) {
			break;
		}
	}

	for (int i = 0; i <= 4; i++) {
		cout<<lista[i]<<" ";
	}

	return 0;

}
