#include <iostream>
#include <sstream>
#include <string>
#include <thread>
#include "src/Serialize.h"
#include "src/Address/AddressIp.h"


int main() {

    std::stringstream  str;
    Serialize sr;
    auto res = sr.write(str, true);

    std::cout << res << '\n';

    std::string  tmpStr = sr.ToString(str);
    std::cout << tmpStr << '\n';

    return 0;
}
