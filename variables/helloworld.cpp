#include <iostream>

int main(){
  //This is a comment
  /*You can use << '\n' or 
  <<std::endl to breack lines; 
  */

  //print console
  std::cout << "Hellow World" << '\n';
  std::cout << "Its really good" <<std::endl;

  int g; //declaration
  g = 5; //attribution

  std::cout << g;
  // integer
  int x = 5;
  int y = 6;
  std::cout << x <<std::endl;
  std::cout << y << '\n';

  int sum = x + y;
  std::cout <<sum <<std::endl;

  //double (number including decimal)
  double price = 10.99;
  std::cout << price << '\n';

  //single character (one)
  char grade = 'A';
  char initial = '$';
  std::cout <<initial <<std::endl;

  //boolean
  bool student = true;
  bool power = false;
  std::cout <<power <<std::endl;
  std::cout <<student <<'\n';

  //strings
  std::string name = "Bro Guigas";
  std::cout <<name <<std::endl;
  std::cout <<"Hello " <<name <<std::endl; 
  std::cout << "You are " <<name << x << "years old ?" <<std::endl;

  //You need to give this return 0
  return 0;
}
