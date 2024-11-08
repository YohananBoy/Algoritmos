#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

main()
{
    ifstream entrada;
    string nome, pulalinha;
    float nota1, nota2, media;

    entrada.open("dados.txt");

    for(;!entrada.eof();)
    {
        getline(entrada,pulalinha);
        getline(entrada, nome);
        cout << "Aluno: " <<nome <<"\n";
        entrada >> nota1;
        entrada >> nota2;
        media = (nota1 + nota2)/2;
        cout << "Media: " << media << "\n\n";
    }

    entrada.close();
}
