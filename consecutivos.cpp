#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	int streak = 0;
	cin >> N;
	vector <int> numeros(N);
	vector <int> storage;
	int storIndice = 0;

	for (int i = 0; i < N; i++) {
		cin >> numeros[i];
	}
	for (int i = 0; i < N-1; i++) {
		if (numeros[i] == numeros[i + 1]) {
			streak++;
			storage.push_back(streak);
		}
		else if (numeros[i] != numeros[i + 1]) {
			streak = 0;
			storIndice++;
		}
	}
	for (int i = 0; i < storage.size() - 1; i++) {
		if (storage[i] > storage[i + 1]) {
			int hand;
			hand = storage[i + 1];
			storage[i + 1] = storage[i];
			storage[i] = hand;
		}
	}
	cout << storage.back() << endl;
	return 0;
}
