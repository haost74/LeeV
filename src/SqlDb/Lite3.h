//
// Created by haost on 10.08.2021.
//

#ifndef MAIN_CPP_LITE3_H
#define MAIN_CPP_LITE3_H

#include "../../lib/sqlite3.h"
#include <stdio.h>
#include <string>

class Lite3 {
private:
    int rc;
    char *zErrMsg = 0;
    std::string nameDb{""};
public:
    Lite3(std::string nameDb);
    ~Lite3();
    sqlite3 *db;

};


#endif //MAIN_CPP_LITE3_H
