#include <iostream>
using namespace std;

class WaterBottle
{
private:
    string company;
    string color;
    int capacityLiters;
    int capacityMilliliters;

public:
    void setCompany(string c)
    {
        company = c;
    }

    void setColor(string col)
    {
        color = col;
    }

    void setCapacity(int l, int ml)
    {
        capacityLiters = l;
        capacityMilliliters = ml;
    }

    string getCompany()
    {
        return company;
    }

    string getColor()
    {
        return color;
    }

    int getLiters()
    {
        return capacityLiters;
    }

    int getMilliliters()
    {
        return capacityMilliliters;
    }

    void drinkWater()
    {
        int drinkMl;
        cout << "Enter amount of water drank (in ml): ";
        cin >> drinkMl;

        int totalMl = (capacityLiters * 1000) + capacityMilliliters;

        if (drinkMl > totalMl)
        {
            cout << "Not enough water in bottle!" << endl;
        }
        else
        {
            totalMl = totalMl - drinkMl;

            capacityLiters = totalMl / 1000;
            capacityMilliliters = totalMl % 1000;

            cout << "Water updated successfully!" << endl;
        }
    }
};

int main()
{
    WaterBottle b1;

    b1.setCompany("Nestle");
    b1.setColor("Blue");
    b1.setCapacity(2, 500);

    cout << "Company: " << b1.getCompany() << endl;
    cout << "Color: " << b1.getColor() << endl;
    cout << "Capacity: " << b1.getLiters() << " L and "
         << b1.getMilliliters() << " ml" << endl;

    b1.drinkWater();

    cout << "\nRemaining Capacity: " << b1.getLiters() << " L and "
         << b1.getMilliliters() << " ml" << endl;

    return 0;
}
