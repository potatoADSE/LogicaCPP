#include <iostream>
using namespace std;

int main() {
	cout<<"Pense em um numero de 0 a 100 e eu terei que adivinhar"<<endl;
	int minimo = 0;
	int maximo = 100;
	int chute;
	char id;
	bool AouN = false;
	do {
		chute = (maximo + minimo)/2;
		cout<<"Meu chute é: "<<chute<<endl;
		cout<<"Digite A, se o chute estiver certo;\nN se o seu numero for menor;\nM se for maior."<<endl;
		cin>>id;
		switch (id) {
			case 'N':
				maximo = chute - 1;
				break;
			case 'M':
				minimo = chute + 1;
				break;
			case 'A':
				cout<<"Acertei! O numero e: "<<chute<<endl;
				AouN = true;
				break;

			default:
				cout<<"Entrada invalida"<<endl;
				break;
		}
	} while (!AouN);

	return 0;
}
