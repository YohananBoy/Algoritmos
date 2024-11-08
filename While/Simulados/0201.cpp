#include <iostream>
#include <math.h>

using namespace std;

int quantidadeDeDigitosDeUmInteiro(int n)
{
    int i, r = 0;
    if (n == 0)
    {
        return 1; // Se o n�mero � o zero, h� apenas um d�gito.
    }

    else while (n != 0)
    {               //Caso contr�rio, verificamos por quantas vezes
        n = n / 10; //conseguimos dividir o n�mero por 10.
        r = r + 1; //Cada divis�o consome um d�gito do n�mero.
    }
     return r;
}

int digitoDeUmInteiro(int n, int pos)
{
    int i, digito, tam;
    tam = quantidadeDeDigitosDeUmInteiro(n); //Determina o tamanho do n�mero.
    //As posi��es dos d�gitos do n�mero come�am em zero e v�o at� a quantidade de
    //d�gitos presentes nesse n�mero, subtra�da de uma unidade. E zero equivale �
    //posi��o das unidades.
    if (pos >= tam) return -1;  //Assim, a tentativa de descobrir um digito na posi��o
                                //igual ao tamanho do n�mero para a fun��o retornar um
                                //erro. O valor -1 indica esse erro.
    else
    {
        for (i = 0; i <= pos; i++)
        {
            digito = n % 10;
            //Ao calcularmos o resto da divis�o de um n�mero por 10, estamos obtento o seu
            //d�gito menos significativo.
            n = n / 10;
            //Ao dividir o n�mero por 10, passamos a trabalhar com um n�mero menor, sem aquele
            //d�gito menos significativo que foi obtido no passo anterior.
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
