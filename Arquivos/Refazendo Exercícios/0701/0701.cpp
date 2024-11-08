#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

void somando (char txt1[], char txt2[], char txt3[])
{
    int i, j;

    for (i = 0; txt1[i] != '\0'; i++)
    {
        txt3[i] = txt1[i];
    }

    txt3[i] = ' ';
    i++;

    for (j = 0; txt2[j] != '\0'; j++, i++)
    {
        txt3[i] = txt2[j];
    }

    txt3[i] = '\0';
}

main()
{
    ofstream saida;
    char txt1[40], txt2[40], txt3[80];
    strcpy(txt1, "Yohanan");
    strcpy(txt2, "Sturti");

    somando(txt1, txt2, txt3);

    saida.open("texto.txt");

    saida << txt3;

    return 0;
}
