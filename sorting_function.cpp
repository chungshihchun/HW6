#ifndef SORTING_FUNCTION_H
#define SORTING_FUNCTION_H
#include <iostream>
using namespace std;
template <class T>
class sorting_function {
    public:
        void insertion_sort(T a[], int size);
    private:
};

template<class T>
void sorting_function<T>::insertion_sort(T a[], int size) {
    for (int i = 0; i < size; i++) {
        T key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }   
}

#endif
