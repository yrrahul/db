//
// Created by Rahul Yadav on 17/01/18.
//

#ifndef NIMBLE_FILE_H
#define NIMBLE_FILE_H

#include "coll_file.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

class fop {
private:
    int fd;
    char buf[100];
public:
    bool create(coll_file *f);

};


#endif //NIMBLE_FILE_H
