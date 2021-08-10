#include <iostream>
#include <sstream>
#include <string>
#include <thread>
#include "src/Serialize.h"
#include "src/Address/AddressIp.h"
#include "src/SqlDb/Lite3.h"

// cmake --build .
int main() {



    std::stringstream  str;
    Serialize sr;
    auto res = sr.write(str, true);

    std::cout << res << '\n';

    std::string  tmpStr = sr.ToString(str);
    std::cout << tmpStr << '\n';

    return 0;
}
