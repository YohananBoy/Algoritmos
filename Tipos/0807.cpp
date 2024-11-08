#include <iostream>
#include <stdio.h>

using namespace std;

//7
struct TVerde {
    int fileira;
    char coluna;
};

struct TAmarelo {
    int fileira;
    char coluna;
};

struct TAzul {
    int fileira;
    char coluna;
};

struct TBranco {
    int fileira;
    char coluna;
};

//8

struct TEixoInicial {
    int x, y;
} eixoini;

struct TEixoFinal {
    int x, y;
} eixofin;

struct TEixoMedia {
    float mediaX; // (TEixoInicial.x + TEixoFinal.x)/2;
    float mediaY; //(TEixoInicial.y + TEixoFinal.y)/2;
} eixomed;

//9

struct TRacional1 {
    int num, den;
} racional1;

struct TRacional2 {
    int num, den;
} racional2;

float soma (int nx, int dx, int ny, int dy) {
    float resultado = ((nx * dy) + (ny * dx)) / (dx * dy);
    return resultado;
}

float subtracao (int nx, int dx, int ny, int dy) {
    float resultado = ((nx * dy) - (ny * dx)) / (dx * dy);
    return resultado;
}

float multiplicacao (int nx, int dx, int ny, int dy) {
    float resultado = (nx * ny)/(dx * dy);
    return resultado;
}

float divisao  (int nx, int dx, int ny, int dy) {
    float resultado = (nx * dy)/(dx * ny);
    return resultado;
}


main() {
/* NUMERO 8
    cout << "Insira os valores do eixo inicial.\n";

    cout << "Valor de X inicial -> ";
    cin >> eixoini.x;

    cout << "Valor de Y inicial -> ";
    cin >> eixoini.y;

    cout << "Insira os valores do eixo final.\n";

    cout << "Valor de X final -> ";
    cin >> eixofin.x;

    cout << "Valor de Y final -> ";
    cin >> eixofin.y;

    eixomed.mediaX = (eixoini.x + eixofin.x)/2;
    eixomed.mediaY = (eixoini.y + eixofin.y)/2;

    cout << "Media de x = " << eixomed.mediaX << "\nMedia de y = " << eixomed.mediaY;
    */

    int num;
    cout << "Insira as fracoes\nNumerador 1 -> ";
    cin >> racional1.num;
    cout << "Denominador 1 -> ";
    cin >> racional1.den;

    cout << "Denominador 2 -> ";
    cin >> racional2.num;
    cout << "Denominador 2 -> ";
    cin >> racional2.den;
    cout << "Que operacao deseja fazer? (0 -> SOMA | 1 -> SUBTRACAO | 2 -> MULTIPLICACAO | 3 -> DIVISAO)\n";
    cin >> num;

    switch (num){
        case 0: cout << soma(racional1.num, racional1.den, racional2.num, racional2.den);
        break;
        case 1: cout << subtracao(racional1.num, racional1.den, racional2.num, racional2.den);
        break;
        case 2: cout << multiplicacao(racional1.num, racional1.den, racional2.num, racional2.den);
        break;
        case 3: cout << divisao(racional1.num, racional1.den, racional2.num, racional2.den);
        break;
        default: return -1; //erro
    }

}
