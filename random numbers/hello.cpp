#include <iostream>
#include <ctime>

int main(){
  // pseudo-random = NOT truly random (but close)

  srand(time(NULL)); //initialize the number generator, we need a seed, programs tipically use calendar time as a seed

  int num = (rand() % 6) + 1; // % 6 + 1 to generate a small number between 1 and 6

  std::cout << num; 

  return 0;
}
//1:54:00