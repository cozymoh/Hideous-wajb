#ifndef BOX_H
#define BOX_H

class Box {
private:
    int length;
    int width;
    int height;

public:
    Box();
    Box(int l, int w, int h);
    ~Box();

    void setLength(int l);
    void setWidth(int w);
    void setHeight(int h);

    int getLength() const;
    int getWidth() const;
    int getHeight() const;
    int getVolume() const;
};

void sortArray(Box* boxArray, const int size);

#endif
