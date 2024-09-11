#include <iostream>


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
    T &at(const int &i) {
        if ((i >= N) || (i < 0))
            throw std::out_of_range("Index out of range");
        return arr[i];
    }

    T &operator[](const int &i) {
        return arr[i];
    };

    T &front() {
        return arr[0];
    }

    T &back() {
        return arr[N - 1];
    }

    T *data() {
        return arr;
    }

    bool empty() {
        return N == 0;
    }

    size_t size() {
        return N;
    }

    size_t max_size() {
        return N;
    }

    void fill(const T &value) {
        for (int i = 0; i < N; ++i) {
            arr[i] = value;
        }
    }
};

int main() {
    Array<int, 0> empty_array{};
    // Checked
    //  - empty() - when empty
    std::cout << "Is array empty - " << empty_array.empty() << '\n';

    // Checked
    //  - front()
    //  - back()
    //  - empty() - when not empty
    //  - size()
    //  - max_size()
    //  - at() - within bound
    Array<int, 4> array = {1, 2, 3, 4};
    std::cout << "Front - " << array.front() << " Back - " << array.back() << " Empty - " << array.empty() << '\n';
    std::cout << "Size - " << array.size() << " Max Size - " << array.max_size() << '\n';
    std::cout << "At index 2 - " << array.at(2) << '\n';

    // Checked
    //  - fill()
    Array<char, 8> char_arr{};
    char_arr.fill('g');
    for (int i = 0; i < char_arr.size(); ++i) {
        std::cout << char_arr.at(i) << ' ';
    }
    std::cout << '\n';

    // Checked
    //  - data()
    //  - operator[]
    char *underlying_char_arr = char_arr.data();
    underlying_char_arr[4] = 'n';
    for (int i = 0; i < char_arr.size(); ++i) {
        std::cout << char_arr[i] << ' ';
    }
    std::cout<<'\n';

    // Checked
    //  - at() - out of bounds
    char_arr.at(9); // Will raise std::out_of_range exception
}
