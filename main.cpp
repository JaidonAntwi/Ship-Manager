#include <iostream>
#include <iomanip>
#include "ShipFile.h"

using namespace std;

int main()
{
    Ship* ships[3] = {
    new Ship("Lollipop", "1960"),
    new cruiseShip("Disney Magic", "1998", 2400),
    new cargoShip("Black Pearl", "1880", 50000)

};
    for (int index=0; index < 3; index++) {
        ships[index] -> print();
        cout << "----------------------------\n";
}
    for (int index = 0; index < 3; index++) { // free the dynamic memory
            delete ships[index];
}

    return 0;
};
