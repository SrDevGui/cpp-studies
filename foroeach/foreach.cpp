#include <iostream>

int main (){
  // foreach loop = loop that eases the traversal over an iterable data set
  int grades[] = {100, 90, 80, 70, 60};

  for(int grade : grades){
    std::cout << grade << "\n";
  }

 return 0;
}