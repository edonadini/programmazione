#include <iostream>

struct X {
  int i=7;
  char member;
  public:
  //explicit X(char s): member(s) {} // in questo caso non posso usare il default ctr
  X(char s): member(s) {};
  X(int j, char s): i(j), member(s) {};
  X()=default;
  X(const X& T): i(T.i), member(T.member) {} // copy constr
  //int f;
};

int main() {
  X x1('d');
  //x1.member='d';
  std::cout<<int('d')<<std::endl;
  X x6(8,'j');
  std::cout<<x6.i<<" "<<x6.member<<std::endl;
  X x2{x1};             // copy ctor
  X x3{std::move(x2)};  // move ctor
  X x4;           
  x4 = x3;              // copy assignment
  X x5;               
  x5 = std::move(x4);   // move assignment
  std::cout<< x1.i<<std::endl;
  std::cout << &(x1.i) << std::endl; 
  std::cout << &x2.member << std::endl; 
  //std::cout << &x3.member << std::endl;
  std::cout << &x4.member << std::endl; //dU
  std::cout << &x5.member << std::endl; //d
  std::cout << &x3.member << std::endl; //dU

  std::cout << &x3 << std::endl;
  std::cout << &x1 << std::endl;
  std::cout << &x2 << std::endl;
  std::cout << &x4 << std::endl;
  std::cout << &x5 << std::endl;

  return 0;
}
