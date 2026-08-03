#include <iostream>
#include <stack>

int main() {
    
    int N;
    stack <int> numeros;
    int soma;
    int nmrs;

    for (int i = 0; i < N; i++) {
        cin >> nmrs;
        if (nmrs != 0) {
            numeros.push(nmrs);
        }
        else {
            numeros.pop();
        }
    }
    for (int i = 0; i < N; i++) {
        soma += numeros
    }
    
}