//
// Created by haost on 07.08.2021.
//

#ifndef IDECLION_SERIALIZE_H
#define IDECLION_SERIALIZE_H
#include <iostream>
#include <string>
#include <sstream>

constexpr auto t_value = static_cast<std::uint8_t>('T');
constexpr auto f_value = static_cast<std::uint8_t>('F');

class Serialize {
public:
    auto ToString(std::ostream& str) -> std::string ;

    template<class T>
            auto write(std::ostream &os, T value) -> std::size_t{
                const auto pos = os.tellp();
                os.write(reinterpret_cast<const char *>(&value), sizeof (value));
                return static_cast<std::size_t>(os.tellp()  -pos);
            }
            // В поток вывода записывается не только содержимое строки, но и ее размер. 
            template<const std::string&>
            auto write(std::ostream& os, const std::string& value) -> std::size_t
            {
                const auto pos = os.tellp();
                const auto len = static_cast<std::uint32_t>(value.size());
                os.write(reinterpret_cast<const char*>(&len), sizeof(len));
                if (len > 0)
                    os.write(value.data(), len);
                return static_cast<std::size_t>(os.tellp() - pos);
            }


    template<bool>
    auto write(std::ostream& os, bool  value) -> std::size_t
    {
        const auto pos = os.tellp();
        const auto tmp = (value) ? t_value : f_value;
        os.write(reinterpret_cast<const char*>(&tmp), sizeof(tmp));
        return static_cast<std::size_t>(os.tellp() - pos);
    }
};


#endif //IDECLION_SERIALIZE_H
