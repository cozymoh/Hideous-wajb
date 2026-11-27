#include <iostream>
using namespace std;

class Counter {
private:
    int i;

public:
    Counter() : i(0) {}
    Counter(int a_val) : i(a_val) {}
    ~Counter() { cout << "Object is destroyed" << endl; }

    void setCounter(int a_intgr) { i = a_intgr; }
    void reset() { i = 0; }
    int getCounter() const { return i; }
    void increment() { i++; }
    void increment(int a_val) { i += a_val; }
    void decrement() { i--; }
    void decrement(int a_val) { i -= a_val; }
};

void printRange(int start, int end) {
    if (start <= end) {
        for (Counter c(start); c.getCounter() <= end; c.increment())
            cout << c.getCounter() << " ";
    } else {
        for (Counter c(start); c.getCounter() >= end; c.decrement())
            cout << c.getCounter() << " ";
    }
    cout << endl;
}

int main() {
    int length, width, start, end;

    cout << "Enter rectangle length: ";
    cin >> length;
    cout << "Enter rectangle width: ";
    cin >> width;

    for (Counter row; row.getCounter() < width; row.increment()) {
        for (Counter col; col.getCounter() < length; col.increment())
            cout << "* ";
        cout << endl;
    }

    cout << "Enter range start: ";
    cin >> start;
    cout << "Enter range end: ";
    cin >> end;

    printRange(start, end);
    return 0;
}
