//
// Created by haost on 07.08.2021.
//

#include "AddressIp.h"
AddressIp::AddressIp() {
    //id +=1;
   Id = Incr();
}


int AddressIp::Incr() {
    static int i = 0;
    return ++i;
}