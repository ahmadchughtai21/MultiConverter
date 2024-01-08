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
        cout << "\n\t\t\t\t      ++++Calculator++++" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
		char cal_choice;
        cout << "Enter a Choice from the Options Above : ";
        cin>>cal_choice;
        int amountNum;
        float num,resultAdd,resultSub,resultMul;
        resultMul=1;
        resultAdd=0;
        resultSub=0;
        int result;
       
        	switch(cal_choice)
			{
				case'1':
					cout<<"\nADDITION!";
					cout<<"\nEnter the amount of numbers you want to add = ";
					cin>>amountNum;
					for(int i=1;i<=amountNum;i++)
					{
						cout<<"\nEnter Number"<<i<<" = ";
						cin>>num;
						resultAdd=resultAdd+num;
					}
					cout<<"Result = "<<resultAdd;
				case'2':
					cout<<"\nSUBTRACTION!";
					cout<<"\nEnter the amount of numbers you want to subtract = ";
					cin>>amountNum;
					int i=1;
					while(i<=amountNum)
					{
						cout<<"\nEnter Number "<<i<<" = ";
						cin>>num;
						if(i==1)
						{
						
							resultSub=resultSub+num;
						}
						i++;
						if(i!=1)
						{
							resultSub=resultSub-num;			
						}
					}	
					cout<<"Result = "<<resultSub;
				case'3':
					cout<<"\nMULTIPLICATION!";
					cout<<"\nEnter the amount of numbers you want to Multiply = ";
					cin>>amountNum;
					for(int i=1;i<=amountNum;i++)
					{
						cout<<"\nEnter Number"<<i<<" = ";
						cin>>num;
						resultMul=resultMul*num;
					}
					cout<<"Result = "<<resultMul;
		
		}
    }

    default:
        cout << "Enter a valid choice!" << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        goto menu;
    }

    return 0;
}
