#include <iostream>
#include <string>

using namespace std;
class vehicle
{
public:
    string Brand;
    int yearOfManufacture;

    void displayVehicle()
    {

        cout << "Brand:" << Brand << endl;
        cout << "yearOfManufacture:" << yearOfManufacture << endl;
    }
};
class car : public vehicle
{
public:
    int numberofdoors;
    int enginecapacity;

    void displayCar()
    {
        cout << "numberofdoors:" << numberofdoors << endl;
        cout << "enginecapacity:" << enginecapacity << endl;
    }
};
int main()
{
    vehicle v;
    v.Brand = "Toyota";
    v.yearOfManufacture = 2020;
    v.displayVehicle();
    car c;
    c.Brand = "Honda";
    c.yearOfManufacture = 2021;
    c.numberofdoors = 4;
    c.enginecapacity = 2000;
    c.displayVehicle();
    c.displayCar();
    return 0;
}