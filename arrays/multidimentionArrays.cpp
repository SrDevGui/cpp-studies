//It's a array made up of separate arrays
#include <iostream>
int main(){
  // The first array has 3 elements, each of which is an array of 4 strings
  //std::string cars[3][4]
  //You don't have to specify the size of the first array, but you must specify the size of the second array
  std::string cars[][3]={
          {"Volvo", "BMW", "Ford"},
          {"Mazda", "Toyota", "Honda"},
          {"Mercedes", "Audi", "Volkswagen"}
                        };

  std::cout << cars[0][0] << " ";
  std::cout << cars[0][1] << " ";
  std::cout << cars[0][2] << "\n";
  std::cout << cars[1][0] << " ";
  std::cout << cars[1][1] << " ";
  std::cout << cars[1][2] << "\n";
  std::cout << cars[2][0] << " ";
  std::cout << cars[2][1] << " ";
  std::cout << cars[2][2] << "\n";

  //Iterate through the array
  int rows = sizeof(cars)/sizeof(cars[0]);
  int colums = sizeof(cars[0])/sizeof(cars[0][0]);

  std::cout << "Rows: " << rows << "\n";
  std::cout << "Colums: " << colums << "\n";

  for(int i = 0; i < rows; i ++){
    for(int j = 0; j < colums; j ++){
      std::cout << cars[i][j] << " ";
    }
    std::cout << "\n";
  }
  return 0;
}