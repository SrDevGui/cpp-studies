#include <iostream>

int main(){
  //The const keyword specifies that a variable's is contant
  //Tells the compiler to prevent anything from modifying it
  // (read-only)

  // Follow the pattern Upcase to const
  const double PI = 3.1456;
  const int WIDTH = 1920;
  const int HEIGHT = 1080;
  std::cout <<PI;
  return 0;
}