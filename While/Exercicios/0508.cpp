#include <iostream>
#include <math.h>

using namespace std;

main()
{
    int num;
    int i;
    int soma = 0;
    int qtd = 0;

    for (i = 1; i <= 5; i++)
    {
        cin >> num;

        if (num >= 0)
        {
            soma = soma + num;
        }
        else
        {
            qtd++;
        }
    }

    cout << "soma de positivos: " << soma << " quantidade de negativos: " << qtd;

}
