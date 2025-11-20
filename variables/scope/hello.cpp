#include <iostream>

//Global variables = declare outside of all function
int myNum = 3;

void printNum();

int main (){

  //local variables = declared inside a function or block {}
  int myNum = 1;
  printNum();
  std::cout << ::myNum;

  return 0;
}

void printNum(){
  int myNum = 2;
  std::cout << ::myNum << "\n";
}
