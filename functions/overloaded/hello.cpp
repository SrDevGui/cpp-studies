#include <iostream>
//Functions can share the same name, but you need to set different parameters
void makePizza();
void makePizza(std::string var1);
void makePizza(std::string var1, std::string var2);


int main (){
  makePizza();
  makePizza("peperone");
  makePizza("calabresa", "cheese");

  return 0;
}

void makePizza(){
  std::cout << "Here is your pizza \n";
}

void makePizza(std::string var1){
    std::cout << "Here is your pizza "<< var1 << " \n";
}

void makePizza(std::string var1, std::string var2){
  std::cout << "Here is your pizza" << var1 << " and " << var2 << "\n";
}