#include <iostream>

int main(){
  //Determine the size in bytes of a:
  //variable, data type, class..

  std::string name = "Bro";
  double gpa = 2.8;
  char grade = 'A';

  char grades[] = {'A', 'B', 'C', 'D', 'E'};

  std::cout << sizeof(name) << " bytes \n";
  std::cout << sizeof(gpa) << " bytes \n";
  std::cout << sizeof(grade) << " bytes \n";
  std::cout << sizeof(grades) << " bytes \n";

  //to calculate the number of elements in an array, we can use the formula:
  //number of elements = sizeof(array)/sizeof(first element of the array)
  std::cout << sizeof(grades)/sizeof(grades[0]) << " elements \n";

  return 0;
}