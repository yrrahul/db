//
// Created by Rahul Yadav on 17/01/18.
//

#include "collection.h"
#include "fop.h"
#include <string>


using namespace std;

bool collection::create(string name) {
    this->name = name;
    fop *file = new fop();
    bool res = file->create(this);
    delete file;
}

const char *collection::getpath() {
    const char *prt = this->path.append(this->name).c_str();
    return prt;
}
