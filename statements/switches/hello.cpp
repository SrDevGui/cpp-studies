#include <iostream>

int main(){
  // switch = alternative to using many "else if" statements
  // compare one value against matching cases

  int month;
  std::cout <<"Enter the month (1-3):";
  std::cin >> month;
  switch(month){
    case 1:
      std::cout << "It is January";
      break;
    case 2:
      std::cout << "It is February";
      break;
    case 3:
      std::cout <<"It is March";
      break;
    default:
      std::cout << "Please enter in only numbers (1-3)";
  }

  return 0;
}