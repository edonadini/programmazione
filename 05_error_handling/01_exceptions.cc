#include <cmath>
#include <iostream>

// implment a square root function that "deals with" negative
// numbers. Moreover according to the logic of the program, d should
// never be greater than 50

int main() {
  try {
    int i,j;
    std::cout << "please insert a number\n";
    double number;
    std::cin >> number;
    if (number < 0)
    throw i;
    if (number > 50)
    throw j;
    auto d= sqrt(number);
    std::cout << "square root of " << number << " is " << d << '\n';
    return 0;
  } catch (int i) {
    std::cerr << "The square root of a negative number is a complex number.\n"
                 "square_root() is "
              << "limited to handle positive double numbers.\n";
    return 1;
  } catch (int j) {
    std::cerr << "The function square_root has been called with a parameter "
                 "greater than 50.\n"
              << "This means there is a bug in the algorithm that generated "
                 "this number.\n";
    return 2;
  } catch (...) {
    std::cerr << "Unknown exception. Aborting.\n";
    return 3;
  }
}

