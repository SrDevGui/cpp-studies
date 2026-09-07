#include <iostream>
//First pass by value
// void swap(std::string x, std::string y);

// int main(){
//   std::string x = "Kool-Aid";
//   std::string y = "Water";

//   swap(x,y);
//   std::cout <<"X: " << &x << '\n';
//   std::cout <<"Y: " << &y << '\n';

//   return 0;
// }
// // You can see that the addresses of x and y in the main function 
// //are different from the addresses of x and y in the swap function. 
// //This is because when you pass by value, a copy of the variables is made, and the original variables remain unchanged.

// void swap(std::string x, std::string y){
//   std::cout <<"X: " << &x << '\n';
//   std::cout <<"Y: " << &y << '\n';
// //  std::string temp;
// //  temp = x;
// //  x = y;
// //  y = temp;
// }

// // // void swap(std::string x, std::string y);

//Now pass by reference
void swap(std::string &x, std::string &y);

int main(){
  std::string x = "Kool-Aid";
  std::string y = "Water";

  swap(x,y);

  std::cout <<"X: " << &x << '\n';
  std::cout <<"Y: " << &y << '\n';

  return 0;
}
// You can see that the addresses of x and y in the main function 
//are the same as the addresses of x and y in the swap function.
void swap(std::string &x, std::string &y){
  std::cout <<"X: " << &x << '\n';
  std::cout <<"Y: " << &y << '\n';
}