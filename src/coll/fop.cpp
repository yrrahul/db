//
// Created by Rahul Yadav on 17/01/18.
//

#include "fop.h"

bool fop::create(coll_file *f) {

    this->fd = open(f->getpath(), O_CREAT | O_RDWR | O_APPEND);
    char buf[50] = "fwfwrw";
    write(this->fd, buf, 50);
    close(this->fd);
}