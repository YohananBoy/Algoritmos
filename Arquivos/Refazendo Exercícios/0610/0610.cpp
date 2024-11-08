#include <iostream>
#include <fstream>

using namespace std;

main()
{
    ifstream entrada;
    ofstream saida;
    int i, j, nl, nc, num;

    saida.open("matriz.txt");

    cout << "Insira a quantidade de linhas e colunas da matriz.\n";
    cout << "Linhas: ";
    cin >> nl;
    cout << "Colunas: ";
    cin >> nc;

    for(i = 0; i < nl; i++)
    {
        for(j = 0; j < nc; j++)
        {
            cout << "[" << i << "]" << "[" << j << "]";
            cin >> num;
            saida << num << " ";
        }
        saida << "\n";
    }
    saida.close();

    entrada.open("matriz.txt");

    int soma = 0;

    for(i = 0; i < nl; i++)
    {
        for(j = 0; j < nc; j++)
        {
            entrada >> num;
            soma += num;
        }
    }

    cout << "A soma eh " << soma;
}
