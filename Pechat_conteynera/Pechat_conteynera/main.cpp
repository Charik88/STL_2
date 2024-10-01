//
//  main.cpp
//  Pechat_conteynera
//
//  Created by Anastasiya Charykova on 01.10.2024.
//

#include <iostream>
#include <set>
#include <vector>
#include <list>

template <typename T>
void print_container(const T& container) {
    for (const auto& item : container) {
        std::cout << item << ", ";
    }
    std::cout << std::endl;
}

// Для std::set, чтобы убрать последнюю запятую
template <typename T>
void print_container(const std::set<T>& container) {
    bool first = true;
    for (const auto& item: container) {
        if (!first) {
            std::cout << " ";
        }
        std::cout << item;
        first = false;
    }
    std::cout << ". помните почему такой порядок? :)" << std::endl;
}
// для std::vector, чтобы убрать последнюю запятую
template <typename T>
void print_container(const std::vector<T>& container) {
    bool first = true;
    for (const auto& item: container) {
        if (!first) {
            std::cout << ", ";
        }
        std::cout << item;
        first = false;
    }
    std::cout << std::endl;
}
// для std::list, чтобы убрать последнюю запятую

template <typename T>
void print_container(const std::list<T>& container) {
    bool first = true;
    for (const auto& item: container) {
        if (!first) {
            std::cout << ", ";
        }
        std::cout << item;
        first = false;
    }
    std::cout << std::endl;
}

int main() {
 
  
    std::set<std::string> test_set = { "one", "two", "three", "four" };
    print_container(test_set); // four, one, three, two

    std::list<std::string> test_list = { "one", "two", "three", "four" };
    print_container(test_list); // one, two, three, four

    std::vector<std::string> test_vector = { "one", "two", "three", "four" };
    print_container(test_vector); // one, two, three, four

    return 0;
}
