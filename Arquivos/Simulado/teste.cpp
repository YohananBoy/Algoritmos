#include <iostream>
#include <fstream>
using namespace std;

typedef struct _TCandidato_ {
    string nome;
    int nota;
} TCandidato;

void trocar (TCandidato v[], int n1, int n2) {

    TCandidato aux = v[n1];
    v[n1] = v[n2];
    v[n2] = aux;
}

void ordenar (TCandidato v[], int tam) {
    int i, j;

    for(i = 0; i < tam - 1; i++)
        for(j = i + 1; j < tam; j++)
            if(v[i].nota < v[j].nota) trocar(v, i, j);
}

int quantidade (ifstream &entrada) {
    int i, nota;
    string nome, pulaLinha;

    getline(entrada, pulaLinha);
    for(i = 0; !entrada.eof(); i++){
        getline(entrada, nome);
        entrada >> nota;
        getline(entrada, pulaLinha);
    }
    entrada.clear();
    entrada.seekg(0);
    return i;
}

main() {
    ifstream entrada;
    TCandidato candidato;
    entrada.open("Dados.txt");
    int i;
    int tam = quantidade(entrada);
    TCandidato v[tam];
    string pulaLinha;

    getline(entrada,pulaLinha);
    for(i = 0; i < tam; i++)
    {
        getline(entrada, candidato.nome);
        entrada >> candidato.nota;
        getline(entrada, pulaLinha);
        v[i] = candidato;
    }

    ordenar(v, tam);

    entrada.close();
    ofstream saida;
    saida.open("Resultados.txt");


    for(i = 0; i < tam; i++) {
        saida << "\n" << v[i].nome << " " << v[i].nota;
    }
}
