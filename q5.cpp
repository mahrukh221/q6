#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    double salary;
    double taxPercentage;

public:
    void get_data()
    {
        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Monthly Salary: ";
        cin >> salary;

        cout << "Enter Tax Percentage: ";
        cin >> taxPercentage;
    }

    double salary_after_tax()
    {
        double taxAmount = (taxPercentage / 100) * salary;
        return salary - taxAmount;
    }

    void update_tax_percentage()
    {
        cout << "Enter New Tax Percentage: ";
        cin >> taxPercentage;

        cout << "Updated Salary After Tax: " << salary_after_tax() << endl;
    }

    void display()
    {
        cout << "\nEmployee Name: " << name << endl;
        cout << "Monthly Salary: " << salary << endl;
        cout << "Tax Percentage: " << taxPercentage << "%" << endl;
        cout << "Salary After Tax: " << salary_after_tax() << endl;
    }
};

int main()
{
    Employee e1;

    e1.get_data();
    e1.display();

    e1.update_tax_percentage();

    return 0;
}
