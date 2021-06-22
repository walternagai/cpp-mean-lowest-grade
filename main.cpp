#include <iostream>
using namespace std;

/*
  MDC (a, b)
  Máximo Divisor Comum entre dois números
*/
int MDC (int a, int b) {
  /*
  Algoritmo de Euclides

  enquanto b diferente de zero faça
    r recebe resto da divisão entre a e b
    a recebe o valor de b
    b recebe o valor de r
  fim-enquanto
  retorne a
  */
  return 0;
}

/*
  MMC (a, b)
  Mínimo Múltiplo Comum entre dois números
*/
int MMC (int a, int b) {
  /*
    MMC(a, b) * MDC(a, b) = a * b

    Para calcular o MMC, pode-se usar uma das fórmulas:
    a) MMC(a, b) = a * (b / MDC(a, b)) OU
    b) MMC(a, b) = b * (a / MDC(a, b))
  */
  return 0;
}

/*
  saoPrimos (a, b)
  Dois números são primos se o MDC é igual a 1
*/
bool saoPrimos (int a, int b) {
  /*
    se o MDC (a, b) é igual a 1 retorne true
    caso contrário retorne falso
  */    
  return false;
}

int main() {
  int numA, numB;

  cin >> numA >> numB;

  cout << "MDC(" << numA << ", " << numB << ") = "
       << MDC (numA, numB) << endl;
  cout << "MMC(" << numA << ", " << numB << ") = "
       << MMC (numA, numB) << endl;
  
  cout << numA << " e " << numB;
  bool primos = saoPrimos(numA, numB);
  if (primos == true)
    cout << " sao primos.\n";
  else
    cout << " não sao primos.\n";

  return 0;
}
