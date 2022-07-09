#include <iostream>
#include <string>
#include <algorithm>

bool next_permutation(std::string::iterator first, std::string::iterator last) {
    auto r_first = std::make_reverse_iterator(last);
    auto r_last = std::make_reverse_iterator(first);
    auto left = std::is_sorted_until(r_first, r_last);
    if (left != r_last) {
        auto right = std::upper_bound(r_first, left, *left);
        std::iter_swap(left, right);
    }
    std::reverse(left.base(), last);
    return left != r_last;
}

int main() {
    std::string s;
    int pattern = 1;
    int repeat = 1;

    std::cin >> s;

    std::sort(s.begin(), s.end());
    for (unsigned int i = 1; i < s.length(); i++) {
        if (s.at(i) == s.at(i - 1)) repeat++;
        else repeat = 1;

        pattern = (pattern * (i + 1)) / repeat; 
    }
    std::cout << pattern << std::endl;

    do {
        std::cout << s << std::endl;
    } while(next_permutation(s.begin(), s.end()));
    return 0;
}