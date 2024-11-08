#include <iostream>
#include <time.h>

using namespace std;

main()
{
    int const n = 13;
    int g[n], r[n];
//  int g[n] = {1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1}; (se quiser saber os numeros da loteria)
    int i, acertos = 0;

    srand(time(NULL));

    for (i = 0; i < n; i++)
    {
        g[i] = (rand() % 3) + 1;
    }

    for (i = 0; i < n; i++)
    {
        cout << "Insira o elemento " << i + 1 << " para o vetor: ";
        cin >> r[i];
        if (r[i] < 1 or r[i] > 3)
            return -1; //erro
    }

    for (i = 0; i < n; i++)
    {
        if (g[i]  == r[i])
        {
            acertos += 1;
        }
    }

    cout << "Acertos: " << acertos << "\n";

    if (acertos == n)
    {
        cout << "PARABENS, VOCE GANHOU!";
    }
}
