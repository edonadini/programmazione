#include <iostream>

int main() {
  double* vect{new double};
  double* point=vect;
  *vect=7.6;
  std::cout<<vect[0]<<std::endl;
  std::cout<<vect<<std::endl;
  std::cout<<&vect<<std::endl;
  std::cout<<*point<<std::endl;
  std::cout<<point<<std::endl;
  delete vect;
  *point=4.6;
  std::cout<<*vect<<std::endl;
  std::cout<<vect<<std::endl;
  delete [] point;

  double d{7.7};
  double * p{&d};
  std::cout<<*p<<std::endl;
  return 0;
}
