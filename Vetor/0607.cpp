#include <iostream>

using namespace std;

funcaoPica(int vetor[], int tamanho)
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        vetor[i] *= i;
    }
}

main()
{
    const int tamanho = 5;
    int i;
    int vetor[tamanho];

    for(i = 0; i < tamanho; i++)
    {
        cin >> vetor[i];
    }

    funcaoPica(vetor, tamanho);

    for(i = 0; i < tamanho; i++)
    {
        cout << vetor[i] << "\n";
    }
}
