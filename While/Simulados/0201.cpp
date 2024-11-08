#include <iostream>
#include <math.h>

using namespace std;

int quantidadeDeDigitosDeUmInteiro(int n)
{
    int i, r = 0;
    if (n == 0)
    {
        return 1; // Se o número é o zero, há apenas um dígito.
    }

    else while (n != 0)
    {               //Caso contrário, verificamos por quantas vezes
        n = n / 10; //conseguimos dividir o número por 10.
        r = r + 1; //Cada divisão consome um dígito do número.
    }
     return r;
}

int digitoDeUmInteiro(int n, int pos)
{
    int i, digito, tam;
    tam = quantidadeDeDigitosDeUmInteiro(n); //Determina o tamanho do número.
    //As posições dos dígitos do número começam em zero e vão até a quantidade de
    //dígitos presentes nesse número, subtraída de uma unidade. E zero equivale à
    //posição das unidades.
    if (pos >= tam) return -1;  //Assim, a tentativa de descobrir um digito na posição
                                //igual ao tamanho do número para a função retornar um
                                //erro. O valor -1 indica esse erro.
    else
    {
        for (i = 0; i <= pos; i++)
        {
            digito = n % 10;
            //Ao calcularmos o resto da divisão de um número por 10, estamos obtento o seu
            //dígito menos significativo.
            n = n / 10;
            //Ao dividir o número por 10, passamos a trabalhar com um número menor, sem aquele
            //dígito menos significativo que foi obtido no passo anterior.
        }
    return digito;
    }
}


int bomba (int n)
{
    int digitos = quantidadeDeDigitosDeUmInteiro(n);
    int i, soma = 0;
    for (i = 0;i <= digitos; i++)
    {
        soma = pow(digitoDeUmInteiro(n, i),digitos) + soma;
    }

    return soma;
}

main()
{
    int i;
    for(i = 0;true;i++)
    {
        if (quantidadeDeDigitosDeUmInteiro(bomba(i)) <= 4)
        {
            cout << bomba(i) << "\n";
        }
        else break;
    }
}
