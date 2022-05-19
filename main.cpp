#include <iostream>
#include "Person.h"
#include "Worker.h"
#include "Manager.h"
using namespace std;

int main() {
    Person person = Person("Maksymilian Kocurek", 1999);
    Worker worker = Worker("Jan Kowalski", 1989, 50000);
    Manager manager = Manager("Michael Scott", 1965, 60000, "Sales");

    cout << person << endl;
    cout << worker << endl;
    cout << manager << endl;

    return 0;
}