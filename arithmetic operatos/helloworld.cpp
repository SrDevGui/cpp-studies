#include <iostream>

int main(){

  //sum
  int students = 20;
  students = students + 1;
  std::cout<<students<<std::endl;
  students +=1;
  std::cout<<students<<std::endl;

  //minus
  students = students - 1;
  std::cout<<students<<std::endl;
  students -=1;
  std::cout<<students<<std::endl;

  //multiply
  students = students *2;
  std::cout<<students<<std::endl;
  students *=2;
  std::cout<<students<<std::endl;

  //division
  double students_2 = 20;
  double student_3 = 20 % 3; 
  std::cout<<student_3<<std::endl;

  students_2 = students_2 / 3;
  std::cout<<students_2<<std::endl;

  students_2 /=2;
  std::cout<<students_2<<std::endl;

  return 0;
}