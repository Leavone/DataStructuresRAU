#include <iostream>
#include "Array.cpp"


using namespace my_array;

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
    std::cout << '\n';

    // Checked
    //  - at() - out of bounds
    char_arr.at(9); // Will raise std::out_of_range exception
}