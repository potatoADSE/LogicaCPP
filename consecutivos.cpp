#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Cria o vetor com N posições
    vector<int> numeros(N);

    // Lê os números
    for (int i = 0; i < N; i++) {
        cin >> numeros[i];
    }

    // streak = tamanho da sequência atual
    // maior = maior sequência encontrada
    int streak = 1;
    int maior = 1;

    // Percorre até N-2, pois será comparado com i+1
    for (int i = 0; i < N - 1; i++) {

        // Se o próximo número é igual ao atual,
        // aumenta a sequência.
        if (numeros[i] == numeros[i + 1]) {
            streak++;

            // Atualiza o maior valor encontrado.
            if (streak > maior) {
                maior = streak;
            }
        }
        // Se forem diferentes, reinicia a sequência.
        else {
            streak = 1;
        }
    }

    // Exibe o tamanho da maior sequência consecutiva.
    cout << maior << endl;

    return 0;
}
