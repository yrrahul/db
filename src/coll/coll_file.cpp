//
// Created by Rahul Yadav on 17/01/18.
//

#include "coll_file.h"
#include "fop.h"
#include <string>


using namespace std;

bool coll_file::create_file(string name) {
    this->name = name;
    fop *file = new fop();
    bool res = file->create(this);
    delete file;
}

const char *coll_file::getpath() {
    const char *prt = this->path.append(this->name).c_str();
    return prt;
}
