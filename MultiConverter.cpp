#include <iostream>
using namespace std;

int main()
{

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
	menu:
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
        	cout << "\n\t\t\t\t      ++++BASIC CALCULATOR++++" << endl;
        	menucal:
        	cout << "\n1. Addition" << endl;
        	cout << "2. Subtraction" << endl;
        	cout << "3. Multiplication" << endl;
        	cout << "4. Division" << endl;
			char cal_choice;
        	cout << "Enter a Choice from the Options Above : ";
        	cin>>cal_choice;
       		switch(cal_choice)
			{
				case'1':
					float num1,num2,addition;
					cout<<"\nADDITION!";
					cout<<"\nEnter First Number = ";
					cin>>num1;
					cout<<"\nEnter Second Number = ";
					cin>>num2;
					addition=num1+num2;
					cout<<"Addition = "<<addition;
					break;
				case'2':
					float sub;
					cout<<"\nSUBTRACTION!";
					cout<<"\nEnter First Number = ";
					cin>>num1;
					cout<<"\nEnter Second Number = ";
					cin>>num2;
					sub=num1-num2;
					cout<<"Subtraction = "<<sub;
					break;
				case'3':
					float mul;
					cout<<"\nMultiplication!";
					cout<<"\nEnter First Number = ";
					cin>>num1;
					cout<<"\nEnter Second Number = ";
					cin>>num2;
					mul=num1*num2;
					cout<<"Multiplication = "<<mul;
					break;
				case'4':
					float div;
					cout<<"\nDivision!";
					cout<<"\nEnter First Number = ";
					cin>>num1;
					cout<<"\nEnter Second Number = ";
					cin>>num2;
					div=num1/num2;
					cout<<"Division = "<<div;
					break;
				default:
					cout<<"Enter a valid choice!";
					goto menucal;
			}
		case '2':
			cout<<"\n\t\t\t\t      ++++LENGTH CONVERSION++++";
			cout<<"";
    }

    return 0;
}
