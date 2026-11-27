#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee {
private:
    int EmployeeId;
    string name;
    string designation;
    int hourlyPayRate;
    int numberOfHoursWorked;
    const int WEEKLY_WORKING_HOURS;
    int overtimeHours;

public:
    Employee();
    Employee(int id, string n, string des, int rate, int hours);
    ~Employee();

    void setEmployeeId(int id);
    void setName(string n);
    void setDesignation(string des);
    void setHourlyPayRate(int rate);
    void setNumberOfHoursWorked(int hours);

    int getEmployeeId() const;
    string getName() const;
    string getDesignation() const;
    int getHourlyPayRate() const;
    int getNumberOfHoursWorked() const;

    int calculateMonthlySalary();
    int calculateWeeklySalary();
    int calculateOverTime() const;
};

#endif
