//pass array to a function
#include <iostream>
double getTotal(double prices[], int size);

//When you pass an array to a function, you only have to pass the array name
int main(){
  double prices[] = {1.2, 2.3, 3.4, 4.5};
  int size = sizeof(prices)/sizeof(prices[0]);
  
  std:: cout << "Size of 0: " << sizeof(prices[0]) << "\n";
  std::cout << "Size prices: " << prices << "\n";
  std::cout << "Size: " << size << "\n";


  double total = getTotal(prices, size);
  std::cout << "Total: " << total << "\n";

  return 0;
}

//Functions no longer know the size of the array, so we have to pass it as a parameter
double getTotal(double prices[], int size){
  double total = 0;

  for(int i = 0; i < size; i ++){
    total += prices[i];
  }

  return total;
}

