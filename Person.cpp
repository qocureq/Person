#include "Person.h"

Person::Person(const string& n, int y) {
    name = n;
    year_of_birth = y;
}

void Person::print(ostream& os) const {
    os << "Name: " << name << endl;
    os << "Year of birth: " << year_of_birth << endl;
}

ostream& operator<<(ostream& os, const Person& o) {
    o.print(os);
    return os;
}