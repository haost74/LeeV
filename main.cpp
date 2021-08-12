#include <iostream>
#include <sstream>
#include <string>
#include <thread>
#include "src/Serialize.h"
#include "src/Address/AddressIp.h"
#include "src/SqlDb/Lite3.h"
#include "src/GarbageFile/GarbageV.h"

// cmake --build .

//***************************************************************************


int main() {

    const std::size_t kB = 1024;
    const std::size_t MB = 1024 * kB;
    const std::size_t GB = 1024 * MB;


    std::cout << 64 * GB % sizeof(uint64_t) << '\n';

    GarbageV gv("D:\\testData\\data.dat");
    gv.Start();

    return 0;



Lite3 db("test.db");

    std::stringstream  str;
    Serialize sr;
    auto res = sr.write(str, true);

    std::cout << res << '\n';

    std::string  tmpStr = sr.ToString(str);
    std::cout << tmpStr << '\n';

    return 0;
}
