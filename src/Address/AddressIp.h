//
// Created by haost on 07.08.2021.
//

#ifndef IDECLION_ADDRESSIP_H
#define IDECLION_ADDRESSIP_H
#include <string>

class AddressIp {
public:
    int Id{0};
    AddressIp();
    int Incr();
    std::string  Address{""};
};


#endif //IDECLION_ADDRESSIP_H
