//
// Created by levav on 9/14/2024.
//
#pragma once
#include <iostream>

#ifndef OOP2_ARRAY_H
#define OOP2_ARRAY_H

namespace my_array {
    template<typename T, size_t N>
    struct Array {
        /**
         * Custom std::array for RAU Data Structures and OOP course
         *  by Levon Avetisyan
         *
         * Implemented functionality:
         *  - at(int i) - accessing with boundary check
         *  - operator[i] - accessing
         *  - front() - first element
         *  - back() - last element
         *  - data() - returns pointer to the first element
         *  - empty() - checks if the array is empty (basically checks if passed size is 0)
         *  - size() - return size
         *  - max_size() - returns maximum size (the same as size(), as the allocated memory is static)
         *  - fill(int value) - fills all of the array with passed value
         * */

        // Memory allocation
        T arr[N];

        // Member functions
        T &at(const int &i);

        T &operator[](const int &i);

        T &front();

        T &back();

        T *data();

        bool empty();

        size_t size();

        size_t max_size();

        void fill(const T &value);
    };
}


#endif //OOP2_ARRAY_H
