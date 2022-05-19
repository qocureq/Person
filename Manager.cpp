#include "Manager.h"

Manager::Manager(const string& n, int y, double s, const string& d) : Worker(n, y, s) {
    dept = d;
}

void Manager::print(ostream& os) const {
    Worker::print(os);
    os << "Department: " << get_dept() << endl;
}

string Manager::get_dept() const {
    return dept;
}