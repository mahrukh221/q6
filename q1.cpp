#include <iostream>
using namespace std;

class BoardMarker
{
private:
    string company;
    string color;
    bool refillable;
    bool inkStatus;

public:
    
    BoardMarker(string c, string col, bool r, bool ink)
    {
        company = c;
        color = col;
        refillable = r;
        inkStatus = ink;
    }

    
    void write()
    {
        if (inkStatus == true)
            cout << "Writing is possible.\n";
        else
            cout << "Ink is empty. Writing not possible.\n";
    }
    
    void refill()
    {
        if (refillable == true)
        {
            inkStatus = true;
            cout << "Marker refilled.\n";
        }
        else
            cout << "Marker cannot be refilled.\n";
    }

    
    bool getInkStatus()
    {
        return inkStatus;
    }
};

int main()
{
    BoardMarker m1("Dollar", "Black", true, false);

    m1.write();

    if (m1.getInkStatus() == true)
        cout << "Ink is available.\n";
    else
        cout << "Ink is not available.\n";

    m1.refill();
    m1.write();

    return 0;
}
