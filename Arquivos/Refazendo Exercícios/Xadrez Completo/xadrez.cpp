#include <fstream>
#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

main()
{
    ofstream saida;
    ifstream entrada;
    int num, i, j;

    saida.open("tabuleiro.txt");

    for(i = 0; i < 8; i++)
    {
        for(j = 0; j < 8; j++)
        {
            saida << 0 << " ";
        }
        saida << "\n";
    }

    entrada.open("tabuleiro.txt");

    cout << "Deseja utilizar que peca? [1 -> Torre | 2 -> Bispo | 3 -> Cavalo]\n";
    cin >> num;

    if (num < 1 or num > 3) return -1;
    else if (num == 1)
    {
        system("cls");

        for(i = 0; i < 8; i++)
        {
            for(j = 0; j < 8; j++)
            {
                entrada >> num;
                cout << num << " ";
            }
            cout << "\n";
        }
    }
}
