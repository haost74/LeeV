//
// Created by haost on 11.08.2021.
//

#ifndef MAIN_CPP_GARBAGEV_H
#define MAIN_CPP_GARBAGEV_H

#include <fstream>
#include <chrono>
#include <vector>
#include <cstdint>
#include <numeric>
#include <random>
#include <algorithm>
#include <iostream>
#include <cassert>
#include <string>


class GarbageV {
private:
    std::vector<uint64_t> GenerateData(std::size_t bytes);
    std::string fileName{""};
public:
    GarbageV(std::string fileName);
    long long option_1(std::size_t bytes);
    long long option_2(std::size_t bytes);
    long long option_3(std::size_t bytes);
    int Start();
};


/*

 #include <fcntl.h>
#include <unistd.h>


const unsigned long long size = 64ULL*1024ULL*1024ULL;
unsigned long long a[size];
int main()
{
    int data = open("test", O_WRONLY | O_CREAT, 0777);
    for(int loop = 0; loop < 32; ++loop)
    {
        write(data, a, size * sizeof(unsigned long long));
    }
    close(data);
}


 */


#endif //MAIN_CPP_GARBAGEV_H
