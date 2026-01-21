// constructor
// parametrerized constructor

#include <iostream>

using namespace std;

class rectangle
{
private:
    int length;
    int breadth;

public:
    rectangle()
    {
        cout << "crreating a rectangle object" << endl;
    }
};

class triangle
{
private:
    int base;
    int height;

public:
    triangle(float b, float h)
    {
        base = b;
        height = h;
        cout << "area: " << 0.5 * base * height << endl;
    }
};

int main()
{
    rectangle r;
    triangle t(10.5, 5.5);             // impleicit call to the parametrerized constructor
    triangle t1 = triangle(15.5, 7.5); // explict call to the parametrerized constructor
    return 0;
}