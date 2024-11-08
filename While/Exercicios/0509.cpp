#include <iostream>
#include <math.h>

using namespace std;

main()
{
    int qtd;
    float altura;
    int idade;
    float mediaAltura = 0;
    float mediaIdade = 0;
    int qtdAltura = 0;
    int qtdIdade = 0;

    cin >> qtd;

    for (; qtd > 0; qtd--)
    {
        cin >> altura;
        cin >> idade;

        if (altura < 1.70)
        {
            mediaIdade += idade;
            qtdIdade++;
        }

        if (idade > 20)
        {
            mediaAltura += altura;
            qtdAltura++;
        }

    }

    mediaAltura = (mediaAltura / qtdAltura);
    mediaIdade = (mediaIdade / qtdIdade);

    cout << "Idade media de menos de 1,70m: " << mediaIdade << "Altura media de mais de 20 anos: "  << mediaAltura;
}

