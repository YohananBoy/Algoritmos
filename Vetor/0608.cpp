#include <iostream>

using namespace std;

maiorNumero (int vetor[], int tamanho)
{
    int i, maior = 0;
    for(i = 0; i < tamanho; i++)
    {
        if (maior < vetor[i])
        {
            maior = vetor[i];
        }
    }

    return maior;
}

main()
{
    const int tamanho = 5;
    int i;
    int vetor[tamanho] = {1,2,3,4,5};
    cout << maiorNumero(vetor, tamanho);
}
