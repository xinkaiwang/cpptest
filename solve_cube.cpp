#include "math.h"
#include <iostream>

bool isSqure(int n) {
  int root = static_cast<int>(sqrt(n));
  return root * root == n;
}

int main() {
  //   for (int i = 0; i <= 100; i++) {
  //     if (isSqure(i)) {
  //       std::cout << "i=" << i << "\n";
  //     }
  //   }
  for (int a = 1; a < 10; a++) {
    for (int b = a + 1; b < 10; b++) {
      for (int c = b + 1; c < 10; c++) {
        if (isSqure(a * a + b * b + c * c)) {
          std::cout << "a=" << a << ", b=" << b << ", c=" << c << "\n";
        }
      }
    }
  }
}