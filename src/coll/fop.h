//
// Created by Rahul Yadav on 17/01/18.
//

#ifndef NIMBLE_FILE_H
#define NIMBLE_FILE_H

#include "collection.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

class fop {
private:
    int fd;
    char buf[100];
public:
    bool create(collection *f);

};


#endif //NIMBLE_FILE_H
