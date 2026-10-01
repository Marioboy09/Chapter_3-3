#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double house = 0.00;
    double phone = 0.00;
    double internet = 0.00;
    double utilities = 0.00;
    double cable = 0.00;

    cout << "Enter your monthly rent/mortgage payment: $";
    cin >> house;

    cout << "Enter your monthly phone bill: $";
    cin >> phone;

    cout << "Enter your monthly internet service bill: $";
    cin >> internet;

    cout << "Enter your monthly utilities bill: $";
    cin >> utilities;

    cout << "Enter your monthly cable bill: $";
    cin >> cable;

    double month = house + phone + internet + utilities + cable;

    double annual = month * 12;

    cout << fixed << setprecision(2);

    cout << "Total monthly cost for these expenses : $" << month << endl;
    cout << "Total annual cost for these expenses : $" << annual << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
