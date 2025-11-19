#include <iostream>

void happyBirthday(){ //declaring our function before the main function
  std::cout << "Happy birthday to you !\n";
  std::cout << "Happy birthday to you !\n";
  std::cout << "Happy birthday to you !\n";
}

void happyBirthday2(std::string name, int age);

int main(){
  //function = a block of reusable code

  std::string name = "Bro";
  int age = 22;

  happyBirthday();
  happyBirthday2(name, age);
  return 0;
}

//To declare functions after the main fn and use you need to declare void and call it before

void happyBirthday2(std::string name, int age){
    std::cout << "Happy birthday to you 222!\n";
    std::cout << "Happy birthday to you " << name << "\n";
    std::cout << "You are " << age << "\n";

}

