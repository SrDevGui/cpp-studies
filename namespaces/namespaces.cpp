#include <iostream>

//Namespace = provides a solution for preventing name conflicts in large projects.
//Each entity needs a unique name.
//A namespace allows for identically named entities as long a the namespaces are different.

namespace first{
  int x = 1;
}

namespace second{
  int x = 2;
}

int main(){
  using namespace first;

  // int x = 0;

  std::cout << second::x;

  return 0;
}