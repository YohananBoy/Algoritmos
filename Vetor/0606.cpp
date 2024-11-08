#include <iostream>

using namespace std;

invertedorUltraMegaBlasterPicaDasGalaxias2000(int vetor[], int tamanho)
{
    int i;
    int invertor[tamanho];

    for (i = 0; i < tamanho; i++)
    {
        invertor[tamanho - i - 1] = vetor[i];
    }

    for (i = 0; i < tamanho; i++)
    {
        vetor[i] = invertor[i];
    }
}

main()
{
    int tamanho, i;
    cout << "FALA MEU AMIGO! ESCREVE AI, QUAL TAMANHO DO VETOR TU QUER?\n";
    cin >> tamanho;
    if (tamanho <= 0)
    {
        return -1; //erro
    }
    int vetor[tamanho];
    cout << "AGORA ESCREVE OS ELEMENTOS DO VETOR!!!!\n";
    for (i = 0; i < tamanho; i++)
    {
        cin >> vetor[i];
    }
    invertedorUltraMegaBlasterPicaDasGalaxias2000(vetor, tamanho);

    cout << "RECEBA ELE INVERSO:\n";
    for (i = 0; i < tamanho; i++)
        cout << vetor[i] << "\n";
}
