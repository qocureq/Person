#include "Worker.h"

Worker::Worker(const string& n, int y, double s) : Person(n, y) {
    salary = s;
}

void Worker::print(ostream& os) const {
    Person::print(os);
    os << "Salary: " << get_salary() << endl;
}

double Worker::get_salary() const {
    return salary;
}