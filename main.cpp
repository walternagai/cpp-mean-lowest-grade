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
  
  ALTERE ESSA FUNÇÃO PARA DESCONSIDERAR TAMBÉM A MAIOR NOTA.
  NÃO É PRECISO CRIAR OUTRA FUNÇÃO PARA DESCONSIDERAR A MAIOR NOTA.

  notas: vetor de notas de tamanho QTDE_NOTAS
*/
float calculaMedia (float notas[QTDE_NOTAS]) {
  float menor, soma;
  soma  = 0;
  // a menor nota é a primeira
  menor = notas[0];
  // soma-se a primeira nota
  soma  = soma + notas[0];
  for (int i = 1; i < QTDE_NOTAS; i++) {
    // se a nota da posição i é menor que está guardada na variável menor
    if (notas[i] < menor)
      menor = notas [i];
    // adiciona-se a nota da posição i
    soma = soma + notas [i];
  } //fim for
  // retira da soma, o valor da menor nota
  soma = soma - menor;
  // divide a soma pela quantidade de notas 
  return soma / (QTDE_NOTAS-1);
}

int main() {
  float notas [QTDE_NOTAS];

  leNotas (notas);

  cout << "Media = " << calculaMedia (notas) << endl;

  return 0;
}
