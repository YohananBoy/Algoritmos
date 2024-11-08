#include <iostream>
using namespace std;

int main()
{
    int NL = 8, NC = 8;
    int i, j;
    int matriz1 [NL] [NC];
    int teste = 0;
    int n1, n2, n3, n4;

    for (i = 0; i < NL; i++)
    {
        for (j = 0; j < NC; j++)
        {
            matriz1[i][j] = 0;
        }
    }

    cout << "Insira a posicao inicial da torre: \n";
    cin >> n1;
    cin >> n2;
    matriz1[n1][n2] = 1;

    cout << "Insira a posicao do inimigo: \n";
    cin >> n3;
    cin >> n4;
    matriz1[n3][n4] = 2;

    if (n1 >= 8 or n2 >= 8 or n3 >= 8 or n4 >= 8)
    {
        cout << "ERRO";
        return -1; // erro
    }

    for (i = 0; i < NL; i++)
    {
        for (j = 0; j < NC; j++)
        {
            cout << matriz1[i][j] << " ";
        }
        cout << "\n";
    }

    for (i = 0; i < NL; i++)
    {
        for (j = 0; j < NC; j++)
        {
            if (matriz1[i][j] == 1)
            {
                for(i = 0; i < NL; i++)
                {
                    if (matriz1[i][n2] == 2)
                    {
                        cout << "MATOU!!!!";
                        teste++;
                        return 0;
                    }
                    else
                    {
                        for (j = 0; j < NC; j++)
                        {
                            if (matriz1[n1][j] == 2)
                            {
                                cout << "MATOU!!!!";
                                teste++;
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }

    if (teste == 0)
    {
        cout << "nao matou bobao";
    }





}
