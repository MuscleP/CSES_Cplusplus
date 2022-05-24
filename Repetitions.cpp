#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string s; 
    int maximum_length = 1;
    int length = 1;

    std::cin >> s;

    for (int i = 1; i < s.length(); i++) {
        length = (s[i] == s[i - 1]) ? length + 1 : 1;
        maximum_length = std::max(maximum_length, length);
    }
    
    std::cout << maximum_length << std::endl;

    return 0;
}