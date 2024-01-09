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
			len:
			cout<<"\n1.Feet to Meters";
			cout<<"\n2.Meter to Feet";
			char choiceL;
			cout<<"\nChoice = ";
			cin>>choiceL;
			if(choiceL=='2'||choiceL=='1')
			{
			
			switch(choiceL)
				{
					case '1':
						cout<<"FEET TO METERS";
						cout<<"\nEnter the lenght in Feets = ";
						float feet;
						cin>>feet;
						float meter;
						meter=feet/3.28;
						cout<<"\nMeters = "<<meter;
						break;
					case '2':
						cout<<"METERS TO FEET";
						cout<<"\nEnter the lenght in meters = ";
						float meterL;
						cin>>meterL;
						float feetL;
						feetL=meterL*3.28;
						cout<<"\nFeets = "<<feetL;
						break;								
				}
			
			}else
			{
				cout<<"Invalid choice!";
				goto len;
			}
		case '3':
			cout << "\n\t\t\t\t      ++++TIME CONVERSION++++" << endl;
        	cout << "\n1. Hours to Minutes" << endl;
        	cout << "2. Minutes to Hour" << endl;
        	cout << "3. Days to Hour" << endl;
        	cout << "4. Hours to Seconds" << endl;
        	cout << "5. Days to Minutes" << endl;
        	cout<<"Choice = ";
			char time_choice;
			cin>>time_choice;
			switch(time_choice)
			{
				case '1':
					cout<<"HOURS TO MINUTES !"<<endl;
					cout<<"Enter the Time in Hours = ";
					float hour1;
					float minute1;
					cin>>hour1;
					minute1=hour1*60;
					cout<<"\nTime in MINUTES = "<<minute1;
					break;
				case '2':	
					cout<<"MINUTES TO HOURS !"<<endl;
					cout<<"Enter the Time in Minutes = ";
					float hour2;
					float minute2;
					cin>>minute2;
					hour2=minute1/60;
					cout<<"\nTime in HOURS = "<<hour2;
					break;
				case '3':
					cout<<"DAYS TO HOUR!"<<endl;
					cout<<"Enter the amount of DAYS = ";
					int day;
					int hour3;
					cin>>day;
					hour3=day*24;
					cout<<"\nHOURS = "<<hour3;
					break;					
				case '4':
					cout<<"HOUR TO SECONDS!"<<endl;
					cout<<"Enter the amount of HOURS = ";
					int sec;
					int hour4;
					cin>>hour4;
					sec=hour4*3600;
					cout<<"\nSECONDS = "<<sec;
					break;	
				case '5':
					cout<<"DAYS TO MINUTES!"<<endl;
					cout<<"Enter the amount of DAYS = ";
					int day1;
					int minute4;
					cin>>day1;
					minute4=day*24*60;
					cout<<"\nMINUTES = "<<minute4;
					break;	
			}	
		case '4':
			cout << "\n\t\t\t\t      ++++TEMPRATURE CONVERSIONS++++" << endl;
        	cout << "\n1. Celsius to Fahrenheit" << endl;
        	cout << "2. Fahrenheit to Celsius" << endl;
        	cout<<"Choice = ";
			char temp_choice;
			cin>>temp_choice;	
			switch(temp_choice)
			{
				case '1':
					cout<<"\nCELSIUS TO FAHRENHEIT!";
					cout<<"\nEnter your temprature in CELSIUS = ";
					float cel;
					cin>>cel;
					float fah;
					fah=(9.0/5.0)*cel+32;
					cout<<"Temprature in FAHRENHEIT = "<<fah;
					break;
				case '2':
					cout<<"\nFAHRENHEIT TO CELSIUS!";
					cout<<"\nEnter your temprature in FAHRENHEIT = ";
					float fah1;
					cin>>fah1;
					float cel1;
					cel1=(5.0/9.0)*(fah1-32);
					cout<<"Temprature in CELSIUS = "<<cel1;
					break;	
			}
		case '5':
				
    }

    return 0;
}
