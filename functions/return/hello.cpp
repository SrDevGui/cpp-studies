#include <iostream>

double square(double var);
double cube(double var);

int main(){

  double length = 4.0;
  double area = square(length);
  double volume = cube(length);

  std::cout <<"Area: " << area << "cm \n";
  std::cout << "Volume: " << volume << "cm\n";

  return 0;
}

//To return a value you need to declare the type of value that it will return
double square(double var){
  // or double result = var * var;

  return var * var;
}

double cube(double var){
  return var * var * var;
}

