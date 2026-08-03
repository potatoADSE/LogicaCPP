#include <iostream>
using namespace std;

int main() {
    
    int base;
    int expoente;
    int resultado = 1;
    cin >> base;
    cin >> expoente;

    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    cout << resultado;
    return 0;
    
}