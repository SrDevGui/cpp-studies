#include<iostream>

int main(){
  //type conversion = conversion a value of one data type to another
  // Implicit = automatic
  //Explicit = Precede value with new data type (int)

  //Implicit
  int x = 3.14;
  std::cout << x << '\n';

  //Explicit
  int y = (int) 2.55;
  std::cout << y <<'\n';

  //Explicit
  //In this case it'll cast this number into a character
  std::cout << (char) 100 << '\n';

  //Ex
  int correct = 8;
  int questions = 10;
  double score = correct/(double)questions * 100;

  std::cout << score <<"%";

  return 0;
}