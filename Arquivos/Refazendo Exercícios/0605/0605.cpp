#include <iostream>
#include <fstream>

using namespace std;

main()
{
    ifstream entrada;
    int num, dado, i, acertos = 0;

    entrada.open("dados.txt");

    for (i = 1;!entrada.eof(); i++)
    {
        entrada >> dado;
        cout << "Insira sua aposta n." << i << " (1 = TIME 1; 2 = EMPATE; 3 = TIME 2)\n";
        cin >> num;
        if(dado == num)
        {
            acertos++;
        }
    }

    if (acertos == 13)
    {
        cout << "VOCE GANHOU 12938712983612937819 DE REAIS!!!!!!!!!!!";
    }
    else
    {
        cout << "nt, mas pelo menos voce acertou " << acertos << " vezes";
    }
}
