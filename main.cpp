#include <iostream>
#include <sstream>
#include <string>
#include <thread>
#include "src/Serialize.h"
#include "src/Address/AddressIp.h"
#include "src/SqlDb/Lite3.h"
#include "src/GarbageFile/GarbageV.h"

#include <fstream>
#include <cstring>

// cmake --build .

//***************************************************************************


void write(std::ostream& os, std::string& str)
{

}

struct data{
    int num;
    std::string str;
};

struct MyRecord {
    char name[80];
    double balance;
    unsigned long account_num;

    long data = summ(100, 5);
    int inline summ(int x, int y) const {return x + y;}
};

void reader(){

    using namespace std;
    struct MyRecord acc;

    strcpy(acc.name, "R");
    acc.balance = 1.3;
    acc.account_num = 34;

    ofstream outbal("balance", ios::out | ios::binary);
    if(!outbal) {
        cout << "Cannot open file.\n";
    }

    outbal.write((char *) &acc, sizeof(struct MyRecord));
    outbal.close();

    ifstream inbal("balance", ios::in | ios::binary);
    if(!inbal) {
        cout << "Cannot open file.\n";
    }

    inbal.read((char *) &acc, sizeof(struct MyRecord));

    cout << acc.data << endl;
    cout << acc.name << endl;
    cout << "Account # " << acc.account_num;
    cout.precision(2);
    cout.setf(ios::fixed);
    cout << endl << "Balance: $" << acc.balance;

    inbal.close();
}


int main() {

    reader();
    return 0;

    /*
    const std::size_t kB = 1024;
    const std::size_t MB = 1024 * kB;
    const std::size_t GB = 1024 * MB;


    std::cout << 64 * GB % sizeof(uint64_t) << '\n';

    GarbageV gv("D:\\testData\\data.dat");
    gv.Start();

    return 0;
     */



    // Lite3 db("test.db");



   data d;
   d.num = 0;
   d.str = "h";

    std::stringstream  str;
    Serialize sr;
    auto res = sr.write(str, d);

    std::cout << res <<   '\n';

    std::string  tmpStr = sr.ToString(str);
    std::cout << tmpStr << '\n';

    return 0;
}
