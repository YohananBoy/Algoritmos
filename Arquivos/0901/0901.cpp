#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream entrada;
    ofstream saida;
    int i, fim;
    string nome;

    saida.open("dados.txt");
    saida << "quem gosta de comer coco?";

    for(i = 0; true; i++)
    {
        cin >> nome;
        saida << "\n" << nome;
        if (i == 2) break;
    }

    saida.close();

    entrada.open("dados.txt");
    saida.open("copia.txt");

    string linha;


    for(;!entrada.eof();)
    {
        getline(entrada, linha);
        saida << linha << "\n";
    }

}






























