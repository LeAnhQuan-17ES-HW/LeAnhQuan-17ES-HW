#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

class Point3D
{
private:
    double x, y, z;
public:
    Point3D(double a, double b, double c)
    {
        x = a;
        y = b;
        z = c;
    }
    double distanceFromCenter()
    {
        return distanceFrom(0,0,0);
    }
    double distanceFrom(Point3D other)
    {
        return sqrt(pow(x-other.x, 2)+pow(y-other.y, 2)+pow(z-other.z, 2));
    }
    double distanceFrom(double xVal, double yVal, double zVal)
    {
        return sqrt(pow(x-xVal, 2)+pow(y-yVal, 2)+pow(z-zVal, 2));
    }
    void details()
    {
        cout << "x= " << x << "\ny= " << y << "\nz= " << z << endl;
    }
};

int main()
{
    Point3D pointA(3,1,2), pointB(6,7,8);
    cout << "pointA:" << endl;
    pointA.details();
    cout << "pointB:" << endl;
    pointB.details();
    cout << "The distance between pointA and (0,0,0) is : " << pointA.distanceFromCenter() << endl<<endl;
    cout << "The distance between pointA and pointB is : " << pointA.distanceFrom(pointB) << endl;
}
