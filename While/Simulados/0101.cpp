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

int numeroEspelhado (int n)
{
    int i, tam, r, teste = 0;
    tam = quantidadeDeDigitosDeUmInteiro(n);
    r = tam - 1;

    if (quantidadeDeDigitosDeUmInteiro(n) <= 0)
    {
        return -1;
    }

    if (quantidadeDeDigitosDeUmInteiro(n) == 1)
    {
        return 1;
    }
    else
    {
        for (i = 0; i < tam; i++)
        {
            if (digitoDeUmInteiro (n, i) == digitoDeUmInteiro(n,r))
            {
                teste ++;
            }
            r--;
        }
    }

    if (teste == tam) return 1;
    else return 0;

}

int teste (int num1, int num2)
{
    int i;

    for (i = num1;i < num2; i++)
    {
        if (numeroEspelhado(i)) cout << i << "\n";
    }
}

int main()
{
    int num1, num2, i;
    int ne;
/*
    cout << "Insira um numero\n";
    cin >> num;
    cout << "O numero " << num << " tem " << quantidadeDeDigitosDeUmInteiro(num) << " digitos.\n";
    cout << "Insira a posicao que deseja saber do numero\n";
    cin >> pos;
    cout << "O digito que se encontra na posicao " << pos << " eh " << digitoDeUmInteiro(num, pos) << "\n";

    if (numeroEspelhado(num) == true) cout << "O numero eh espelhado.\n";
    else cout << "O numero nao eh espelhado.\n";
*/

    cout << "Agora insira um limite inicial: ";
    cin >> num1;
    cout << "Por ultimo, insira o limite final: ";
    cin >> num2;

    for (i = num1; i < num2; i=i+1)
    {
        ne = numeroEspelhado(i);
        if (ne)
          cout << i << "\n";
    }

    //teste(num1, num2);
    return 1;
}



