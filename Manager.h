#ifndef PERSON_MANAGER_H
#define PERSON_MANAGER_H
#include "Worker.h"

class Manager : public Worker {
    string dept;

public:
    Manager(const string&, int, double, const string&);
    void print(ostream&) const;
    string get_dept() const;
};


#endif //PERSON_MANAGER_H
