#include <iostream>

int main(){
  //Values can be accessed by an index number, starting from 0

  std::string car[] = {"Volvo", "BMW", "Ford", "Mazda"};
  std::cout <<car << "\n"; //It'll print the address of the first element of the array
  std::cout <<car[0] << "\n"; //It'll print the first element of the array

  //To assign values
  std::string cars[4];
  cars[0] = "Camaro";
  cars[1] = "Mustang";

  std::cout <<cars[0] << "\n"; //It'll print the first element of the array
  std::cout <<cars[1] << "\n"; //It'll print the second element of the array
  
  
  return 0;
}