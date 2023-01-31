#include <iostream>
using namespace std;
int soma(int a, int b) {
  return a + b;
}

int main() {
  int x = 3, y = 5;
  int resultado = soma(x, y);
  std::cout << "A soma de " << x << " e " << y << " é " << resultado << std::endl;
  return 0;
}
