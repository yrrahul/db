#include <iostream>
#include "src/coll/collection.h"
#include "src/impl/graphdb.h"

int main() {
    collection *f = new collection();
    f->create("employee");
    graphdb *gd = new graphdb();
    gd->put(f);

    delete f;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}