#include <iostream>
#include "sorting_function.cpp"
#include <string>

int main() {
    sorting_function<int> int_sorter;
    sorting_function<double> double_sorter;
    sorting_function<char> char_sorter;

    int size;
    std::string type;

    std::cin >> size;
    std::cin >> type;
    int* int_array;
    double* double_array;
    char* char_array;
    if (type == "int") {
        int_array = new int[size];
        for (int i = 0; i < size; i++) {
            std::cin >> int_array[i];
        }
        int_sorter.insertion_sort(int_array, size);
        for (int i = 0; i < size; i++) {
            std::cout << int_array[i] << " ";
        }
        delete [] int_array;
    }
    else if (type == "double") {
        double_array = new double[size];
        for (int i = 0; i < size; i++) {
            std::cin >> double_array[i];
        }
        double_sorter.insertion_sort(double_array, size);
        for (int i = 0; i < size; i++) {
            std::cout << double_array[i] << " ";
        }
        delete [] double_array;
    }
    else if (type == "char") {
        char_array = new char[size];
        for (int i = 0; i < size; i++) {
            std::cin >> char_array[i];
        }
        char_sorter.insertion_sort(char_array, size);
        for (int i = 0; i < size; i++) {
            std::cout << char_array[i] << " ";
        }
        delete [] char_array;
    }
    else {
        std::cout << "Invalid type" << std::endl;
        return 0;
    }
    std::cout << std::endl;
    return 0;
}
