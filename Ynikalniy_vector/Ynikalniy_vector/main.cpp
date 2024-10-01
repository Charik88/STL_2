//
//  main.cpp
//  Ynikalniy_vector
//
//  Created by Anastasiya Charykova on 01.10.2024.
//

#include <iostream>
#include <vector>
#include <unordered_set>
#include <sstream>
#include <algorithm>


std::vector<int> removeDuplicates(std::vector<int> input) { // ф-ия для удаления дубликата
  std::sort(input.begin(), input.end()); // сортируем вектор
  input.erase(std::unique(input.begin(), input.end()), input.end()); // удаляем дубликаты
  return input;
}

int main(){

  
  std::vector<int>input;
  int num;
  std::cout << "[IN]: ";
  while(std::cin>>num && num != 0){
    input.push_back(num);
  }
  std::cout << "[OUT]: ";
std::vector<int> output = removeDuplicates(input);
  for (int num : output){
    std::cout << num << " ";
  }
    std::cout << std::endl;
    
    
  return 0;
}
