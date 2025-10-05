#include <iostream>

// typedef = reserved keyword used to create an additional name
// (alias) for another data type.
// New identifier for an existing type
// Helps with redability and reduces types
// Replaced typedef with 'using' (work better w/ templates)

//typedef
typedef std::string text_t;
typedef int number_t;

//using
using text_2 = std::string;
using number_2 = int;

int main(){

  text_t firstname = "Guigas";
  number_t age = 22;

  std::cout << firstname <<'\n';
  std::cout << age << '\n';


  text_2 secondname = "Guigas2";
  number_2 age2 = 24;

  std::cout << secondname <<std::endl;
  std::cout << age2 <<std::endl;
  return 0;
  
}