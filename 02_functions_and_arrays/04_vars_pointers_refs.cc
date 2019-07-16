#include <iostream>

int main() {
  double d{9.9};
  double& ref{d};
  double* ptr{&d};
  std::cout << "content of\t   d: " << d << std::endl;
  std::cout << "content of\t ref: " << ref << std::endl;
  std::cout << "content of\t ptr: " << ptr << std::endl << std::endl;

  std::cout << "&\t   ptr: " << &ptr << std::endl;
  std::cout << "*\t   ptr: " << *ptr<< std::endl;
  std::cout << "*&\t   ptr: " << *&ptr << std::endl;
  std::cout << "&*\t   ptr: " << &*ptr<< std::endl;
  std::cout << "&*&\t   ptr: " << &*&ptr << std::endl;
  std::cout << "*&*\t   ptr: " << *&*ptr<< std::endl;
  std::cout << "*&*&\t   ptr: " << *&*&ptr << std::endl;
  std::cout << "&*&*\t   ptr: " << &*&*ptr<< std::endl<<std::endl;
  
  std::cout <<"*&*&\t   ref: " << *&*&ref << std::endl;
  std::cout <<"&*&\t   ref: " << &*&ref << std::endl;
  std::cout <<"*&\t   ref: " << *&ref << std::endl;
}
