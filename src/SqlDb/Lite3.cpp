//
// Created by haost on 10.08.2021.
//

#include "Lite3.h"

Lite3::Lite3(std::string nameDb) {
    this->nameDb = nameDb;
    rc = sqlite3_open("test.db", &db);
}

Lite3::~Lite3() {
    sqlite3_close(db);
}
