//
// Created by Rahul Yadav on 17/01/18.
//

#include "graphdb.h"

graphdb::graphdb() {
    cls = new vector<collection>(200);
}

void graphdb::put(collection *p) {
    cls->push_back(*p);
}