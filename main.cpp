#include <iostream>
#include "src/coll/coll_file.h"

int main() {
    coll_file *f = new coll_file();
    f->create_file("testposix.txt");
    delete f;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}