#include <iostream>  

using namespace std;

int main() {

    int valorSaque, notas200, notas50, notas5, notas1;
    cout << "Digite o valor do saque (entre R$ 15 e R$ 500): ";
    cin >> valorSaque;

    while (valorSaque < 15 || valorSaque > 500) {
        cout << "Valor invalido. Digite o valor do saque (entre R$ 15 e R$ 500): ";
        cin >> valorSaque;
    }

    notas200 = valorSaque / 200;

    valorSaque %= 200;

    notas50 = valorSaque / 50;

    valorSaque %= 50;

    notas5 = valorSaque / 5;

    valorSaque %= 5;

    notas1 = valorSaque;

    cout << endl << "Notas a serem fornecidas:" << endl;
    cout << notas200 << " nota(s) de R$ 200" << endl;
    cout << notas50 << " nota(s) de R$ 50" << endl;
    cout << notas5 << " nota(s) de R$ 5" << endl;
    cout << notas1 << " nota(s) de R$ 1" << endl;

    return 0;
}