#include <iostream>
using namespace std;
int main() {
  int x = 5;
  int *ponteiro;
  ponteiro = &x;
  std::cout << "O endereço de x é " << &x << std::endl;
  std::cout << "O endereço armazenado no ponteiro é " << ponteiro << std::endl;
  std::cout << "O valor armazenado na variável apontada por ponteiro é " << *ponteiro << std::endl;
  return 0;
}
