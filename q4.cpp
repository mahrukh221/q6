#include <iostream>
using namespace std;

class StationeryShop
{
private:
    string items[50];
    double prices[50];
    int count;

public:
    StationeryShop()
    {
        count = 0;
    }

    void addItem(string name, double price)
    {
        items[count] = name;
        prices[count] = price;
        count++;
        cout << "Item added successfully!\n";
    }

    void showItems()
    {
        if (count == 0)
        {
            cout << "No items available in shop.\n";
            return;
        }

        cout << "\nAvailable Items:\n";
        for (int i = 0; i < count; i++)
        {
            cout << i + 1 << ". " << items[i]
                 << " - Rs " << prices[i] << endl;
        }
    }

    void generateReceipt()
    {
        if (count == 0)
        {
            cout << "Shop is empty. Add items first.\n";
            return;
        }

        int n;
        cout << "\nEnter number of items customer purchased: ";
        cin >> n;

        string boughtItem;
        int quantity;
        double total = 0;

        cout << "Receipt\n";

        for (int i = 0; i < n; i++)
        {
            cout << "Enter item name: ";
            cin >> boughtItem;

            cout << "Enter quantity: ";
            cin >> quantity;

            bool found = false;

            for (int j = 0; j < count; j++)
            {
                if (items[j] == boughtItem)
                {
                    double cost = prices[j] * quantity;
                    cout << boughtItem << " x " << quantity
                         << " = Rs " << cost << endl;
                    total += cost;
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << boughtItem << " not found in shop!\n";
            }
        }

        cout << "\nTotal Bill = Rs " << total << endl;
    }
};

int main()
{
    StationeryShop shop;
    int choice;

    do
    {
        cout << " Stationery Shop Menu\n";
        cout << "1. Add Item\n";
        cout << "2. View Items\n";
        cout << "3. Generate Receipt\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            string name;
            double price;

            cout << "Enter item name: ";
            cin >> name;

            cout << "Enter item price: ";
            cin >> price;

            shop.addItem(name, price);
        }
        else if (choice == 2)
        {
            shop.showItems();
        }
        else if (choice == 3)
        {
            shop.generateReceipt();
        }
        else if (choice == 4)
        {
            cout << "Exiting program\n";
        }
        else
        {
            cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}
