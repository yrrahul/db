//
// Created by Rahul Yadav on 17/01/18.
//

#ifndef NIMBLE_COLL_FILE_H
#define NIMBLE_COLL_FILE_H "/Users/rahul/data/"

#include <string>

using namespace std;

class collection {
private:
    string name;
    string path = NIMBLE_COLL_FILE_H;
public:
    bool create(string name);

    const char *getpath();
};


#endif //NIMBLE_COLL_FILE_H
