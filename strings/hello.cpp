#include <iostream>

int main(){
  std::string name;
  std::cout << "Enter your name \n";
  std::getline(std::cin, name);

  name.erase(0,3);
  std::cout <<name;

  
  // if(name.length() > 12){
  //   std::cout << "Your name is long !";
  // }
  // else if (name.empty()){
  //   std::cout << "You have to type your name !";
  // }
  // else{
  //   std::cout << "Welcome " <<name;
  // }

  // name.clear();
  // std::cout << "Hello" << name;

  // name.append("@gmail.com");
  // std::cout << "Your name is" << name;
  //1:35:00
  return 0;
}