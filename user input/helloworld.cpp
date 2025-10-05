#include <iostream>
//cout << (insertion operator)
// cin >> (extraction operator)

int main(){
  std::string name;
  int age;

  std::cout <<"What's your age ?";
  std::cin >>age;

  std::cout << "What`s your full name ?:";
  std::getline(std::cin >>std::ws, name); //ws for white spaces, this portion will eliminate any new lines characters or any white spaces before any user input

  std::cout << "Hello " << name <<'\n';
  std::cout <<"You are " << age <<" years old";

  return 0;
}