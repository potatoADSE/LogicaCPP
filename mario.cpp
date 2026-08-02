#include <iostream>
using namespace std;

int main() {
    int LA;
    do {
        cout<<"Digite um numero inteiro de 1 a 50"<<endl;
        cin>>LA;
    } while (LA>50 || LA<1);
    for (int i = 0; i < LA; i++) {
        for (int j = 0; j < LA; j++) {
            if (LA - i - 2 < j) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}