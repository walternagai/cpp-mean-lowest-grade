#include <iostream>
using namespace std;

const int QTDE_NOTAS = 5;

/* 
  leNotas (notas)
  Realiza a leitura de notas que podem variar de 0 até 10.

  notas: vetor de notas de tamanho QTDE_NOTAS
*/
void leNotas (float notas[QTDE_NOTAS]) {
  for (int i = 0; i < QTDE_NOTAS; i++) {
    cin >> notas[i];
  } // fim for
}

/*
  calculaMedia (notas) : float
  Calcula a média das notas, desconsiderando a menor nota.

  notas: vetor de notas de tamanho QTDE_NOTAS
*/
float calculaMedia (float notas[QTDE_NOTAS]) {
  float menor, soma;
  soma  = 0;
  menor = notas[0];
  soma  = soma + notas[0];
  for (int i = 1; i < QTDE_NOTAS; i++) {
    if (notas[i] < menor)
      menor = notas [i];
    soma = soma + notas [i];
  } //fim for
  soma = soma - menor;
  return soma / (QTDE_NOTAS-1);
}

int main() {
  float notas [QTDE_NOTAS];

  leNotas (notas);

  cout << "Media = " << calculaMedia (notas) << endl;

  return 0;
}
