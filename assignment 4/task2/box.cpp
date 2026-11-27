#include "Box.h"

Box::Box() : length(0), width(0), height(0) {}
Box::Box(int l, int w, int h) : length(l), width(w), height(h) {}
Box::~Box() {}

void Box::setLength(int l) { length = l; }
void Box::setWidth(int w) { width = w; }
void Box::setHeight(int h) { height = h; }

int Box::getLength() const { return length; }
int Box::getWidth() const { return width; }
int Box::getHeight() const { return height; }

int Box::getVolume() const {
    return length * width * height;
}

void sortArray(Box* boxArray, const int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (boxArray[j].getVolume() > boxArray[j + 1].getVolume()) {
                Box temp = boxArray[j];
                boxArray[j] = boxArray[j + 1];
                boxArray[j + 1] = temp;
            }
        }
    }
}
