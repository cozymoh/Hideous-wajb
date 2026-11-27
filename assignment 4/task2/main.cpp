#include <iostream>
#include "Box.h"
using namespace std;

int main() {
    int size;

    cout << "Enter number of boxes: ";
    cin >> size;

    while (size <= 0) {
        cout << "Enter a positive number: ";
        cin >> size;
    }

    Box* boxArray = new Box[size];

    for (int i = 0; i < size; i++) {
        int l, w, h;
        cout << "Enter length, width and height for box " << i + 1 << ": ";
        cin >> l >> w >> h;

        boxArray[i].setLength(l);
        boxArray[i].setWidth(w);
        boxArray[i].setHeight(h);
    }

    sortArray(boxArray, size);

    cout << "\nBoxes sorted by ascending volume:\n";
    for (int i = 0; i < size; i++) {
        cout << "Box " << i + 1
             << ": " << boxArray[i].getLength() << " x "
             << boxArray[i].getWidth() << " x "
             << boxArray[i].getHeight()
             << " | Volume = " << boxArray[i].getVolume() << endl;
    }

    delete[] boxArray;
    boxArray = nullptr;

    return 0;
}
