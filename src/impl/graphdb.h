//
// Created by Rahul Yadav on 17/01/18.
//

#ifndef NIMBLE_GRAPH_ADJ_H
#define NIMBLE_GRAPH_ADJ_H

#include <stdlib.h>
#include "../coll/collection.h"
#include <vector>

using namespace std;


class graphdb {
private:
    vector<collection> *cls;
public:
    graphdb();

    void put(collection *p);
};


#endif //NIMBLE_GRAPH_ADJ_H
