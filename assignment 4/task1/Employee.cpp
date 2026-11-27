#include "Employee.h"

Employee::Employee()
    : EmployeeId(0), name(""), designation(""), hourlyPayRate(0),
      numberOfHoursWorked(0), WEEKLY_WORKING_HOURS(40), overtimeHours(0) {}

Employee::Employee(int id, string n, string des, int rate, int hours)
    : EmployeeId(id), name(n), designation(des), hourlyPayRate(rate),
      numberOfHoursWorked(hours), WEEKLY_WORKING_HOURS(40), overtimeHours(0) {
    if (numberOfHoursWorked > WEEKLY_WORKING_HOURS)
        overtimeHours = numberOfHoursWorked - WEEKLY_WORKING_HOURS;
}

Employee::~Employee() {}

void Employee::setEmployeeId(int id) { EmployeeId = id; }
void Employee::setName(string n) { name = n; }
void Employee::setDesignation(string des) { designation = des; }
void Employee::setHourlyPayRate(int rate) { hourlyPayRate = rate; }

void Employee::setNumberOfHoursWorked(int hours) {
    numberOfHoursWorked = hours;
    overtimeHours = (hours > WEEKLY_WORKING_HOURS)
        ? hours - WEEKLY_WORKING_HOURS : 0;
}

int Employee::getEmployeeId() const { return EmployeeId; }
string Employee::getName() const { return name; }
string Employee::getDesignation() const { return designation; }
int Employee::getHourlyPayRate() const { return hourlyPayRate; }
int Employee::getNumberOfHoursWorked() const { return numberOfHoursWorked; }

int Employee::calculateOverTime() const {
    return overtimeHours;
}

int Employee::calculateWeeklySalary() {
    int regularHours = (numberOfHoursWorked < WEEKLY_WORKING_HOURS)
        ? numberOfHoursWorked : WEEKLY_WORKING_HOURS;

    int salary = regularHours * hourlyPayRate
               + overtimeHours * hourlyPayRate * 1.5;

    overtimeHours = 0;
    return salary;
}

int Employee::calculateMonthlySalary() {
    return calculateWeeklySalary() * 4;
}
