#include "reverse_string.h"
#include <string>
#include <utility>
namespace reverse_string {

// TODO: add your solution here
    std::string reverse_string(std::string string) {
        long unsigned int l{0};
        long unsigned int r{string.length() -1};
        if (string.empty()) { return string; }

        while (l < r) {
            std::swap(string[l], string[r]);
            l++; r--;
        }
        return string;
    }

}  // namespace reverse_string
