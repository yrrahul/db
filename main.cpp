#include <iostream>
#include "src/coll/collection.h"

int main() {
    collection *f = new collection();
    f->create("testposix.txt");
    delete f;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}