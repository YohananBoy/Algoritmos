#include <iostream>
#include <math.h>

using namespace std;

int quantidadeDeDigitosDeUmInteiro(int n)
{
    int i, r = 0;
    if (n == 0)
    {
        return 1;
    }

    else while (n != 0)
    {
        n = n / 10;
        r = r + 1;
    }
     return r;
}
int digitoDeUmInteiro(int n, int pos)
{
    int i, digito, tam;
    tam = quantidadeDeDigitosDeUmInteiro(n);

    if (pos >= tam) return -1;

    else
    {
        for (i = 0; i <= pos; i++)
        {
            digito = n % 10;
            n = n / 10;
        }
    return digito;
    }
}

int binParaDec (int n)
{
    int i, digitos, resultado = 0;
    digitos = quantidadeDeDigitosDeUmInteiro(n);

    for (i = 0; i < digitos; i++)
    {
        resultado = (digitoDeUmInteiro(n,i) * pow(2,i) + resultado);

    }

    return resultado;
}

int decParaBin (int n)
{
    int i, digitos, divisao, resultado = 0;
    digitos = quantidadeDeDigitosDeUmInteiro(n);

    for (i = 0; n > 0; i++)
    {
       divisao = n % 2;
       resultado += divisao * pow(10,i);
       n /= 2;
    }

    return resultado;
}

main()
{
    int num;
    cout << "Calculadora de binario para decimal. (insira um numero BINARIO)\n";
    cin >> num;
    cout << binParaDec(num) << "\n";

    cout << "Agora vamos transformar um numero decimal em binario. insira um numero DECIMAL).";
    cin >> num;
    cout << decParaBin(num);
}
