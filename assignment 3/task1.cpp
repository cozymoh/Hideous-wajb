#include <iostream>
#include <string>
using namespace std;

class Date {
private:
    int month, day, year;
    const string months[12] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

public:
    Date() : month(1), day(1), year(2000) {}

    void setMonth(int m) {
        while (m < 1 || m > 12) {
            cout << "Enter month (1-12): ";
            cin >> m;
        }
        month = m;
    }

    void setDay(int d) {
        while (d < 1 || d > 31) {
            cout << "Enter day (1-31): ";
            cin >> d;
        }
        day = d;
    }

    void setYear(int y) { year = y; }

    void printNumeric() const {
        cout << month << "/" << day << "/" << year << endl;
    }

    void printLong() const {
        cout << months[month - 1] << " " << day << ", " << year << endl;
    }

    void printEuropean() const {
        cout << day << " " << months[month - 1] << " " << year << endl;
    }
};

int main() {
    Date date;
    int m, d, y;

    cout << "Enter month: ";
    cin >> m;
    date.setMonth(m);

    cout << "Enter day: ";
    cin >> d;
    date.setDay(d);

    cout << "Enter year: ";
    cin >> y;
    date.setYear(y);

    date.printNumeric();
    date.printLong();
    date.printEuropean();

    return 0;
}
