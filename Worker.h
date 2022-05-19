#ifndef PERSON_WORKER_H
#define PERSON_WORKER_H
#include "Person.h"

using namespace std;

class Worker : public Person
        {

protected:
    double salary;

public:
    Worker(const string&, int, double);
    void print(ostream&) const;
    double get_salary() const;
};


#endif //PERSON_WORKER_H
