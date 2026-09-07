#include <iostream>

void printInfo(const std::string &name, const int &age);
int main()
{
  std:: string name = "Bro";
  int age =21;
  printInfo(name, age);
  return 0;
}

void printInfo(const std::string &name, const int &age){
  //Const parameters cannot be modified inside the function. 
  //If you try to modify them, you will get a compilation error.
  name = " ";
  age = 0;
  std::cout << "Name: " << name << '\n';
  std::cout << "Age: " << age << '\n';
}