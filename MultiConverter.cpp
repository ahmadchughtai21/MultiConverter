#include <iostream>
using namespace std;

int main()
{
menu:
    cout << " ==================================================================================" << endl;
    cout << "=  #####  ####   #####  ####  #####    #           #   ####   #####  ####   #####   =" << endl;
    cout << "= #      #    #    #   #    # #    #    #         #   #    #    #   #    #  #    #  =" << endl;
    cout << "= #      #    #    #   #    # #    #     #       #    #    #    #   #    #  #    #  =" << endl;
    cout << "= # #### ######    #   #    # #####       #     #     ######    #   #    #  #####   =" << endl;
    cout << "= #    # #    #    #   #    # #   #        #   #      #    #    #   #    #  #   #   =" << endl;
    cout << "= #    # #    #    #   #    # #    #        # #       #    #    #   #    #  #    #  =" << endl;
    cout << "=  ##### #    #    #    ####  #     #        #        #    #    #    ####   #     # =" << endl;
    cout << " ==================================================================================" << endl;
    cout << "\n\t\t\t\t      ++++MENU++++" << endl;

    // menu

    cout << "1. Calculator" << endl;
    cout << "2. Length Conversions" << endl;
    cout << "3. Time Conversions" << endl;
    cout << "4. Temperature Conversions" << endl;
    cout << "5. Weight Conversions" << endl;
    cout << "6. Volume Conversions" << endl;
    cout << "7. Speed Conversions" << endl;
    cout << "8. Angular Conversions" << endl;
    cout << "9. Digital Storage Conversions" << endl;
    cout << "10. Currency Conversions" << endl;
    cout << "Enter a Choice from the Options Above : ";

    char choice1;
    cin >> choice1;

    // Choices
    switch (choice1)
    {
    case '1':
        cout << "\n\t\t\t\t      ++++Calculator++++" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;

        cout << "Enter a Choice from the Options Above : ";
        break;

    default:
        cout << "Enter a valid choice!" << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        goto menu;
    }

    return 0;
}
