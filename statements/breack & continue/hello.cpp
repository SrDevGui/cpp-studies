#include <iostream>

int main(){
  //break = break ou of a loop
  //continue = skip current interation

  for(int i = 1; i<=20; i++){
    if(i == 13){
      break;
    }
    std::cout << i << '\n';

  }

  std::cout << "******\n";

  for(int i = 1; i<=20; i++){
    if(i == 13){
      continue;
    }
    std::cout << i << '\n';

  }

  return 0;
}