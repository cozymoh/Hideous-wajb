#include <iostream>
#include "Employee.h"
using namespace std;

int main() {
    Employee e1(101, "Ali", "Programmer", 100, 52);
    Employee e2(102, "Sara", "Designer", 150, 40);

    cout << "Employee: " << e1.getName() << endl;
    cout << "Designation: " << e1.getDesignation() << endl;
    cout << "Overtime hours: " << e1.calculateOverTime() << endl;
    cout << "Weekly salary: " << e1.calculateWeeklySalary() << endl;
    cout << "Monthly salary (4 weeks): " << e1.calculateMonthlySalary() << endl;

    cout << endl;
    cout << "Employee: " << e2.getName() << endl;
    cout << "Overtime hours: " << e2.calculateOverTime() << endl;
    cout << "Weekly salary: " << e2.calculateWeeklySalary() << endl;
    cout << "Monthly salary (4 weeks): " << e2.calculateMonthlySalary() << endl;

    return 0;
}
