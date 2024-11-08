#include <iostream>
using namespace std;

int main()
{
    int NL = 5, NC = 5;
    int i, j;
    int matriz1 [NL] [NC];
    int soma = 0;
    int k = 0;

    for (i = 0; i < NL; i++)
    {
        for (j = 0; j < NC; j++)
        {
            cin >>matriz1[i][j];
        }
        cout << "\n";
    }


    for (j = 0; j < NC; j++) //linha 4
    {
        soma += matriz1[4][j];
    }

    for (i = 0; i < NL; i++) //coluna 2
    {
        soma += matriz1[i][2];
    }


    for (i = 0; i < NL; i++) //diagonal principal
    {
        for (j = 0; j < NC; j++)
        {
            if (k == 0 or k % 6 == 0)
            {
                soma += matriz1[i][j];
            }
            k++;
        }
    }

    k = 24; //resetando o k

    for (i = 0; i < NL; i++) //diagonal secundária
    {
        for (j = 0; j < NC; j++)
        {
            if (k == 0 or k % 6 == 0)
            {
                soma += matriz1[i][j];
            }
            k--;
        }
    }

    for (i = 0; i < NL; i++)
    {
        for (j = 0; j < NC; j++)
        {
            soma += matriz1[i][j];
        }
    }

    for (i = 0; i < NL; i++)
    {
        for (j = 0; j < NC; j++)
        {
            cout << matriz1[i][j];
        }
        cout << "\n";
    }


    cout << soma;

}
