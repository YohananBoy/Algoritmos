#include <iostream>
#include <math.h>

using namespace std;

int oposto (int n)
{
    int inverso;

    if (n > 0)
    {
        for(inverso = 0;true;inverso--)
        {
            if (inverso + n == 0)
            {
                return inverso;
            }
        }
    }
    else if (n < 0)
    {
        for (inverso = 0; true; inverso++)
        {
             if (inverso + n == 0)
                {
                    return inverso;
                }
        }
    }
    else return 0;
}

int absoluto (int n)
{
    if (n > 0) return n;

    else
    {
        return oposto(n);
    }
}

int subtracao (int n1, int n2)
{
    if (n1 >= 0 && n2 > 0)
    {
        for(;n2 != 0;n2--)
        {
            n1--;
        }

        return n1;
    }
    else if (n1 >= 0 && n2 < 0)
    {
        for (;n2 != 0;n2++)
        {
            n1++;
        }
        return n1;
    }
    else if (n1 <= 0 && n2 > 0)
    {
        for(;n2 != 0;n2--)
        {
            n1--;
        }

        return n1;
    }
    else if (n1 <= 0 && n2 < 0)
    {
        for (;n2 != 0;n2++)
        {
            n1++;
        }
        return n1;
    }
}

int soma (int n1, int n2)
{
     if (n1 >= 0 && n2 > 0)
    {
        for(;n2 != 0;n2--)
        {
            n1++;
        }

        return n1;
    }
    else if (n1 >= 0 && n2 < 0)
    {
        for (;n2 != 0;n2++)
        {
            n1--;
        }
        return n1;
    }
    else if (n1 <= 0 && n2 > 0)
    {
        for(;n2 != 0;n2--)
        {
            n1++;
        }

        return n1;
    }
    else if (n1 <= 0 && n2 < 0)
    {
        for (;n2 != 0;n2++)
        {
            n1--;
        }
        return n1;
    }
}

int multiplicacao (int n1, int n2)
{
    int somas = n1;
    int i = n2 - 1;
    if (n2 > 0)
    {
        for(;i > 0;i--)
        {
            somas = soma(n1,somas);
        }

        return somas;
    }
    else if (n2 < 0)
    {
        i = oposto(i) - 2;
        for(;i > 0;i--)
        {
            somas = soma(n1,somas);
        }

        return oposto(somas);
    }
    else return 0;

}

int divisao (int n1, int n2)
{
    int i;
    int multi;

    if (n1 > 0 and n2 > 0)
    {
        for (i = 1;true;i++)
        {
            multi = multiplicacao(n2,i);
            if (multi == n1)
            {
                return i;
            }
        }
    }
    else if (n1 > 0 and n2 < 0)
    {
        for (i = 1;true;i++)
        {
            multi = oposto(multiplicacao(n2,i));
            if (multi >= n1)
            {
                return oposto(i);
            }
        }
    }
    else if (n1 < 0 and n2 > 0)
    {
        for (i = 1;true;i++)
        {
            multi = multiplicacao(n2,i);
            if (multi >= oposto(n1))
            {
                return oposto(i);
            }
        }
    }
    else if (n1  < 0 and n2 < 0)
    {
        for (i = 1;true;i++)
        {
            multi = multiplicacao(oposto(n2),i);
            if (multi >= oposto(n1))
            {
                return i;
            }
        }
    }
    else if (n1 == 0 or n2 == 0)
    {
        return -1; //erro
    }

}

int resto (int n1, int n2)
{

}
main()
{
    int n;
    int n1, n2;

    cin >> n;
    cout << "Oposto:" << oposto(n) << "\n";
    cout << "Absoluto:" << absoluto(n) << "\n";

    cin >> n1 >> n2;
    cout << "Subtracao:" << subtracao(n1,n2) << "\n";
    cout << "Soma:" << soma(n1,n2) << "\n";
    cout << "Multiplicacao:" << multiplicacao(n1,n2) << "\n";
    cout << "Divisao:" << divisao(n1,n2) << "\n";
}
