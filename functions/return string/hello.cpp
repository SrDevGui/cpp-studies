#include <iostream>

std::string concatString(std::string string1, std::string string2);

int main(){
  
  std::string firstname = "Gui";
  std::string lastName = "Code";

  std::string fullname = concatString(firstname, lastName);

  std::cout << "Full name " << fullname << " \n";

  return 0;
}

std::string concatString(std::string string1, std::string string2){

  return string1 + " " + string2;
}