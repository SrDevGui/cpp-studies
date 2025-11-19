#include <iostream>
#include <ctime>

int main () {
  //This is useful like if you writing a game to generate random events like monsters..
  srand(time(0));
  int randNum = rand() % 4 + 1;

  switch(randNum){
    case 1:
      std::cout << "You win a bumper sticker !\n";
      break;

    case 2: 
      std::cout << "You win a T-shirt !\n";
      break;

    case 3: 
      std::cout << "You win a gift !\n";
      break;

    case 4: 
      std::cout << "You win a dog !\n";
      break;
  }

  return 0;
}