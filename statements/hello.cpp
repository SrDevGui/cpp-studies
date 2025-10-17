#include<iostream>

int main(){
  int age;

  std::cout << "Enter your age: ";
  std:: cin >>age;

  if(age > 18){
    std::cout <<"Welcome to the site !";
  } else if (age <0){
    std::cout <<"You haven't beem boen yet !";
  }
   else {
    std::cout << "You are not old enought to enter !";
  }

  return 0;
}

// 01:03:00