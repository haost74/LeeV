//
// Created by haost on 07.08.2021.
//

#include "Serialize.h"

auto Serialize::ToString(std::ostream& str) -> std::string
{
    std::ostringstream  ss;
    ss << str.rdbuf();
    return ss.str();
}