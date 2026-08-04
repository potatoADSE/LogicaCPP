#include <iostream>
using namespace std;

int main() {
    
    int base;
    int expoente;
    int resultado = 1; // declara a variavel igualando a 1
    cin >> base;       // pra nao dar bug e multiplicar certo
    cin >> expoente;   // se fosse zero o resultado ia sair errado

    for (int i = 0; i < expoente; i++) {
        resultado *= base; // resultado igual a base vezes base
    }
    cout << resultado;
    return 0;
    
}