#include <iostream>

int square(int x) { return x * x; }

long long factorial(int n) {
  if (n < 0) return -1;
  if (n == 0 || n == 1) return 1;
  return n * factorial(n - 1);
}

int main() {
  int number = 10;

  int result = square(number);
  long long fact = factorial(number);

  std::cout << std::endl;
  std::cout << "Number: " << number << std::endl;
  std::cout << "result: " << result << std::endl;
  std::cout << "Square: " << result << std::endl;
  std::cout << "Factorial: " << fact << std::endl;

  return 0;
}