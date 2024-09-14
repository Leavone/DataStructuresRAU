//
// Created by levav on 9/14/2024.
//
#pragma once

#include "Array.h"

namespace my_array {
    template<typename T, size_t N>
    T &Array<T, N>::at(const int &i) {
        if (i >= N)
            throw std::out_of_range("Index out of range");
        return arr[i];
    }

    template<typename T, size_t N>
    T &Array<T, N>::operator[](const int &i) {
        return arr[i];
    }

    template<typename T, size_t N>
    T &Array<T, N>::front() {
        return arr[0];
    }

    template<typename T, size_t N>
    T &Array<T, N>::back() {
        return arr[N - 1];
    }

    template<typename T, size_t N>
    T *Array<T, N>::data() {
        return arr;
    }

    template<typename T, size_t N>
    bool Array<T, N>::empty() {
        return N == 0;
    }

    template<typename T, size_t N>
    size_t Array<T, N>::size() {
        return N;
    }

    template<typename T, size_t N>
    size_t Array<T, N>::max_size() {
        return N;
    }

    template<typename T, size_t N>
    void Array<T, N>::fill(const T &value) {
        for (int i = 0; i < N; ++i) {
            arr[i] = value;
        }
    }
}