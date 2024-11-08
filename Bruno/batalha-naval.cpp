#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    const int NL = 10, NC = 10;
    int naval[NL][NC];
    int i, j, k;
    int b, nat, npv;
    int aleatorio1;
    int aleatorio2;

    srand(time(NULL));

    for (i = 0; i < NL; i++)
    {
        for (j = 0; j < NC; j++)
        {
            naval[i][j] = 0;
        }
    }

    b = rand()%10 + 1;
    nat = rand()%10 + 1;
    npv = rand()%10 + 1;

    for (k = 1; k <= b; k++)
    {
        naval[rand()%10][rand()%10] = 1;
    }

    for (k = 1; k <= nat; k++)
    {
        aleatorio1 = rand()%10;
        aleatorio2 = rand()%10;

        if (naval[aleatorio1][aleatorio2] == 0)
        {
            if (naval[aleatorio1][aleatorio2+1] == 0)
            {
                for (i = 0; i < NL; i++)
                {
                    for (j = 0; j < NC; j++)
                    {
                        naval[aleatorio1][aleatorio2] = 2;
                        naval[aleatorio1][aleatorio2+1] = 2;
                    }
                }
            }
            else if (naval[aleatorio1][aleatorio2-1] == 0)
            {
                for (i = 0; i < NL; i++)
                {
                    for (j = 0; j < NC; j++)
                    {
                        naval[aleatorio1][aleatorio2] = 2;
                        naval[aleatorio1][aleatorio2-1] = 2;
                    }
                }
            }
            else if (naval[aleatorio1+1][aleatorio2] == 0)
            {
                for (i = 0; i < NL; i++)
                {
                    for (j = 0; j < NC; j++)
                    {
                        naval[aleatorio1][aleatorio2] = 2;
                        naval[aleatorio1+1][aleatorio2] = 2;
                    }
                }
            }
            else if (naval[aleatorio1-1][aleatorio2] == 0)
            {
                for (i = 0; i < NL; i++)
                {
                    for (j = 0; j < NC; j++)
                    {
                        naval[aleatorio1][aleatorio2] = 2;
                        naval[aleatorio1-1][aleatorio2] = 2;
                    }
                }
            }
        }
        else
            k--;
    }

    for (k = 1; k <= npv; k++)
    {
        aleatorio1 = rand()%10;
        aleatorio2 = rand()%10;

        if (naval[aleatorio1][aleatorio2] == 0)
        {
            if (naval[aleatorio1][aleatorio2+1] == 0 and naval[aleatorio1][aleatorio2+2] == 0)
            {
                for (i = 0; i < NL; i++)
                {
                    for (j = 0; j < NC; j++)
                    {
                        naval[aleatorio1][aleatorio2] = 3;
                        naval[aleatorio1][aleatorio2+1] = 3;
                        naval[aleatorio1][aleatorio2+2] = 3;
                    }
                }
            }
            else if (naval[aleatorio1][aleatorio2-1] == 0 and naval[aleatorio1][aleatorio2-2] == 0)
            {
                for (i = 0; i < NL; i++)
                {
                    for (j = 0; j < NC; j++)
                    {
                        naval[aleatorio1][aleatorio2] = 3;
                        naval[aleatorio1][aleatorio2-1] = 3;
                        naval[aleatorio1][aleatorio2-2] = 3;
                    }
                }
            }
            else if (naval[aleatorio1+1][aleatorio2] == 0 and naval[aleatorio1+2][aleatorio2])
            {
                for (i = 0; i < NL; i++)
                {
                    for (j = 0; j < NC; j++)
                    {
                        naval[aleatorio1][aleatorio2] = 3;
                        naval[aleatorio1+1][aleatorio2] = 3;
                        naval[aleatorio1+2][aleatorio2] = 3;
                    }
                }
            }
            else if (naval[aleatorio1-1][aleatorio2] == 0 and naval[aleatorio1-2][aleatorio2])
            {
                for (i = 0; i < NL; i++)
                {
                    for (j = 0; j < NC; j++)
                    {
                        naval[aleatorio1][aleatorio2] = 3;
                        naval[aleatorio1-1][aleatorio2] = 3;
                        naval[aleatorio1-2][aleatorio2] = 3;
                    }
                }
            }
        }
        else
            k--;
    }


    for (i = 0; i < NL; i++)
    {
        for (j = 0; j < NC; j++)
        {
            cout << naval[i][j] << " ";
        }

        cout << "\n";
    }

    cout << "\n";

    cout << "barco: " << b << " " << "nat: "  << nat << " " << "npv: "  << npv << "\n";

    int qtd, n1, n2;
    cout << "AGORA VAMO DAR PIPOCO!!!\n" << "DIGITE A QUANTIDADE DE TIROS QUE DESEJA DAR: ";
    cin >> qtd;
    cout << "\n";

    int acertos = 0, erros = 0;

    for (k = 1; k <= qtd; k++)
    {
        cout << "Linha: ";
        cin >> n1;
        cout << "Coluna: ";
        cin >> n2;

        if (naval[n1][n2] != 0)
        {
            cout << "PUTZ, MATOU!";
            acertos ++;
        }

        else
        {
           cout << "PUTZ, ERROU!";
           erros++;
        }

        cout << "\n";
    }

    cout << "VOCE ERROU " << erros << " E ACERTOU " << acertos << "!";
}
