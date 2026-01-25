#ifndef SHIPFILE_H_INCLUDED
#define SHIPFILE_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class Ship
{
    private:
        string name; // Ship name
        string yearBuilt; // Year it was built
    public:
        Ship(string n, string y) // Constructor
        {
            name = n;
            yearBuilt = y;
        }
        string getName() // Accessors
        { return name; }
        string getYearBuilt()
        { return yearBuilt; }
        virtual void print()
        {
        cout << "Name: " << name << endl
        << "Year built: " << yearBuilt << endl;
        }
};

class cruiseShip : public Ship
{
    private:
        int maxPassengers;
    public:
        cruiseShip(string n, string y, int p) :
            Ship(n, y)
        {
            maxPassengers = p;
        }

        void setMaxPassenegers(int p)
        {
            maxPassengers = p;
        }
        int getMaxPaasengers() const
        {
            return maxPassengers;
        }

        void print() override
        {
            cout << "Name: " << getName () << endl;
            cout << "Maximum Passengers: " << maxPassengers << endl;
        }
};

class cargoShip : public Ship
{
    private:
        int cargoCapacity;
    public:
        cargoShip(string n, string y, int c) :
            Ship(n, y)
    {
       cargoCapacity = c;
    }

    void setCargoCapacity(int c)
    {
        cargoCapacity = c;
    }
    int getCargoCapacity() const
    {
        return cargoCapacity;
    }

    void print() override
    {
        cout << "Name: " << getName () << endl;
        cout << "Maximum Capacity: " << cargoCapacity << endl;
    }

};


#endif // SHIPFILE_H_INCLUDED
