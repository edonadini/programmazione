#include <iostream>
#include <string>

struct S {
  int a;
  double b;
  std::string s;  // default ctor of string set s to empty string
  S() = default;
  S(const S&) = delete;  // cannot use a copy ctor
};

std::ostream& operator<<(std::ostream& os, const S& t){
  os<< t.a << "--" << t.b << "--" << t.s << "\n";
  return os;
}

int main() {
  S s1;  // calls default constructor

  S s2{1, 2.3, "alberto"};  // if there are no custom ctors I can
                            // directly initialize the members. Note
                            // that I need access (i.e. they must be
                            // public)
  // it is called aggregate initialization (see
  // https://en.cppreference.com/w/cpp/language/aggregate_initialization)

  S s3{};  // calls {} on each member: S s3 { {}, {}, {} };

   //S s4(s2); // compiler error
  S s5;
  s5=std::move(s2);
  std::cout<<s1<<std::endl;
  std::cout<<s2<<std::endl;
  std::cout<<s3<<std::endl;
  std::cout<<s5<<std::endl;
  //std::cout<<s4<<std::endl;
  return 0;
}
