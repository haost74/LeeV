#include <iostream>
#include <sstream>
#include <string>
#include "src/Serialize.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::stringstream  str;
    Serialize sr;
    auto res = sr.write(str, true);

    std::cout << res << '\n';

    std::string  tmpStr = sr.ToString(str);
    std::cout << tmpStr << '\n';
    return 0;
}
