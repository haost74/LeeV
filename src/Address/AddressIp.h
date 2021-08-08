//
// Created by haost on 07.08.2021.
//

#ifndef IDECLION_ADDRESSIP_H
#define IDECLION_ADDRESSIP_H
#include <string>
#include <vector>

class AddressIp {
public:
    int Id{0};
    AddressIp();
    int Incr();
    std::string  Address{""};

};


class Creator
{
public:
    std::vector<AddressIp> allIp;
    std::string path{""};
    Creator(std::string path);
    void Init();
};


#endif //IDECLION_ADDRESSIP_H
