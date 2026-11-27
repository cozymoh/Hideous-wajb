#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int idNumber;
    string department;
    string position;

public:
    Employee() : name(""), idNumber(0), department(""), position("") {}

    Employee(string n, int id, string dept, string pos)
        : name(n), idNumber(id), department(dept), position(pos) {}

    Employee(string n, int id)
        : name(n), idNumber(id), department(""), position("") {}

    void setName(string n) { name = n; }
    void setIdNumber(int id) { idNumber = id; }
    void setDepartment(string dept) { department = dept; }
    void setPosition(string pos) { position = pos; }

    string getName() const { return name; }
    int getIdNumber() const { return idNumber; }
    string getDepartment() const { return department; }
    string getPosition() const { return position; }
};

int main() {
    Employee employees[5] = {
        Employee("mohamed ali", 47899, "Accounting", "Vice President"),
        Employee("mohamed avdol", 39119, "IT", "Programmer"),
        Employee("ahmed tamer", 81447, "Manufacturing", "Engineer"),
        Employee("walter whit", 52362, "HR", "Manager"),
        Employee("ray man", 54124, "Finance", "Auditor")
    };

    cout << "Name\t\t\tID Number\tDepartment\t\tPosition\n";
    for (int i = 0; i < 5; i++) {
        cout << employees[i].getName() << "\t"
             << employees[i].getIdNumber() << "\t\t"
             << employees[i].getDepartment() << "\t\t"
             << employees[i].getPosition() << endl;
    }

    return 0;
}
