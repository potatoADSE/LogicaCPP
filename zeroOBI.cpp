#include <iostream>
#include <stack>
using namespace std;

int main() {
    
    int N;
    cin >> N;
    stack <int> numeros;
    int soma = 0;
    int nmrs;

    for (int i = 0; i < N; i++) {
        cin >> nmrs;
        nmrs != 0 ? numeros.push(nmrs) : numeros.pop();
    }

    while (!numeros.empty()) {
        soma += numeros.top();
        numeros.pop();
    }

    cout << soma;

    return 0;
    
}