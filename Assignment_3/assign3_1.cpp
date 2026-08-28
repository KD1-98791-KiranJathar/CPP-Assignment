#include<iostream>
using namespace std;

class Cylinder
{
private:
    double radius;
    double height;

    static double PI;

public:

    Cylinder() : radius(0), height(0)
    {
    }

    Cylinder(double radius, double height)
        : radius(radius), height(height)
    {
    }

    double getRadius()
    {
        return this->radius;
    }

    double getHeight()
    {
        return this->height;     // ✅
    }

    void setRadius(double radius)
    {
        this->radius = radius;
    }

    void setHeight(double height)
    {
        this->height = height;
    }

    void calculateVolume()
    {
        cout << "Volume : "
             << PI * radius * radius * height << endl;
    }
};

double Cylinder::PI = 3.14;

int main()
{
    Cylinder c1;

    c1.calculateVolume();

    c1.setHeight(5);
    c1.setRadius(5);

    cout << "Radius : " << c1.getRadius() << endl;
    cout << "Height : " << c1.getHeight() << endl;

    c1.calculateVolume();

    return 0;
}