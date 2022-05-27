#include <iostream>
#include <string>
#include <deque>
#include <vector>

#define number_of_alphabets 26

int main() {
    std::vector<int> alpabet_count(number_of_alphabets, 0);
    std::string input_string;
    std::deque<char> output_string;

    std::cin >> input_string;

    for (char c : input_string) alpabet_count.at(c - 'A')++;

    bool middle_exist = input_string.length() % 2;
    for (int i = 0; i < alpabet_count.size(); i++) {
        if (alpabet_count[i] % 2) {
            if (middle_exist) {
                output_string = {char(i + 'A')};
                alpabet_count[i]--;
                middle_exist = false;
            }
            else {
                std::cout << "NO SOLUTION";
                return 0;
            }
        }
    }

    for (size_t i = 0; i < alpabet_count.size(); i++) {
        for (int j = 0; j < alpabet_count[i] / 2; j++) {
            output_string.push_front(i + 'A');
            output_string.push_back(i + 'A');
        }
    }

    for (char c : output_string) {
        std::cout << c;
    }
    std::cout << std::endl;

    return 0;
}