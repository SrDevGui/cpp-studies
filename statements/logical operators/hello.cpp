#include <iostream>

int main (){
  // && = check if two conditions are true
  // || = check if at least one of two conditions is true
  // ! = reservers the logical state of its operand

  int temp;
  bool sunny;

  std::cout << "Enter the temperature: ";
  std::cin >> temp;

  if(temp <= 0 || temp >= 30){
    std::cout << "Temperature is good !\n";
  }else {
    std::cout << "Temperature is bad !\n";
  }
  if(!sunny){
    std::cout << "It is cloudy outside !";
  } else {
    std::cout << "It is sunny outside !";
  }
  return 0;
}