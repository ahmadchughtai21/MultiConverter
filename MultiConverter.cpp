#include <iostream>
using namespace std;

int main()
{
	const int PI = 3.141592;
	cout << " .--.  .--. .-----. .--. .---.   .-..-. .--. .-----. .--. .---. " << endl;
	cout << ": .--': .; :`-. .-': ,. :: .; :  : :: :: .; :`-. .-': ,. :: .; :" << endl;
	cout << ": : _ :    :  : :  : :: ::   .'  : :: ::    :  : :  : :: ::   .'" << endl;
	cout << ": :; :: :: :  : :  : :; :: :.`.  : `' ;: :: :  : :  : :; :: :.`." << endl;
	cout << "`.__.':_;:_;  :_;  `.__.':_;:_;   `.,' :_;:_;  :_;  `.__.':_;:_;" << endl;

	cout << "================================================================" << endl;
	cout << endl;
	cout << endl;
menu:

	cout << "------------------------ M A I N   M E N U ---------------------" << endl;

	cout << "1. Calculator" << endl;
	cout << "2. Length Conversions" << endl;
	cout << "3. Time Conversions" << endl;
	cout << "4. Temperature Conversions" << endl;
	cout << "5. Weight Conversions" << endl;
	cout << "6. Volume Conversions" << endl;
	cout << "7. Speed Conversions" << endl;
	cout << "8. Angular Conversions" << endl;
	cout << "9. Digital Storage Conversions" << endl;
	cout << "X. Constant Values" << endl;
	cout << "Y. Exit "<<endl;
	cout << "---------------------------------------------------------------" << endl;
	cout << "Enter a Choice from the Options Above : ";

	char choice1;
	cin >> choice1;

	// Choices
	switch (choice1)
	{
	case '1':
	menucal:
		cout << endl;
		cout << endl;
		cout << "---------------------- C A L C U L A T O R --------------------" << endl;
		cout << "\n1. Addition" << endl;
		cout << "2. Subtraction" << endl;
		cout << "3. Multiplication" << endl;
		cout << "4. Division" << endl;
		char cal_choice;
		cout << "---------------------------------------------------------------" << endl;
		cout << "Enter a Choice from the Options Above : ";
		cin >> cal_choice;
		switch (cal_choice)
		{
		case '1':
			float num1, num2, addition;

			cout << endl;
			cout << endl;
			cout << "+++++++++++++++++++++++++++ ADDITION ++++++++++++++++++++++++++" << endl;
			cout << "\nEnter First Number = ";
			cin >> num1;
			cout << "\nEnter Second Number = ";
			cin >> num2;
			addition = num1 + num2;
			cout << "Addition = " << addition;
			break;
		case '2':
			float sub;
			cout << "+++++++++++++++++++++++++ SUBTRACTION +++++++++++++++++++++++++" << endl;
			cout << "\nEnter First Number = ";
			cin >> num1;
			cout << "\nEnter Second Number = ";
			cin >> num2;
			sub = num1 - num2;
			cout << "Subtraction = " << sub;
			break;
		case '3':
			float mul;
			cout << "\nMultiplication!";
			cout << "\nEnter First Number = ";
			cin >> num1;
			cout << "\nEnter Second Number = ";
			cin >> num2;
			mul = num1 * num2;
			cout << "Multiplication = " << mul;
			break;
		case '4':
			float div;
			cout << "\nDivision!";
			cout << "\nEnter First Number = ";
			cin >> num1;
			cout << "\nEnter Second Number = ";
			cin >> num2;
			div = num1 / num2;
			cout << "Division = " << div;
			break;
		default:
			cout << "Enter a valid choice! Try Again!";
			cout << endl;
			cout << endl;
			goto menucal;
		}
	case '2':
	len:
		cout << endl;
		cout << endl;
		cout << "-------------- L E N G T H   C O N V E R S I O N S ------------" << endl;
		cout << "\n1.Feet to Meters";
		cout << "\n2.Meter to Feet";
		char choiceL;
		cout << "\nChoice = ";
		cin >> choiceL;
		if (choiceL == '2' || choiceL == '1')
		{

			switch (choiceL)
			{
			case '1':
				cout << "FEET TO METERS";
				cout << "\nEnter the lenght in Feets = ";
				float feet;
				cin >> feet;
				float meter;
				meter = feet / 3.28;
				cout << "\nMeters = " << meter;
				break;
			case '2':
				cout << "METERS TO FEET";
				cout << "\nEnter the lenght in meters = ";
				float meterL;
				cin >> meterL;
				float feetL;
				feetL = meterL * 3.28;
				cout << "\nFeets = " << feetL;
				break;
			}
		}
		else
		{
			cout << "Enter a valid choice! Try Again!";
			cout << endl;
			cout << endl;
			goto len;
		}
	case '3':
		cout << "\n\t\t\t\t      ++++TIME CONVERSION++++" << endl;
		cout << "\n1. Hours to Minutes" << endl;
		cout << "2. Minutes to Hour" << endl;
		cout << "3. Days to Hour" << endl;
		cout << "4. Hours to Seconds" << endl;
		cout << "5. Days to Minutes" << endl;
		cout << "Choice = ";
		char time_choice;
		cin >> time_choice;
		switch (time_choice)
		{
		case '1':
			cout << "HOURS TO MINUTES !" << endl;
			cout << "Enter the Time in Hours = ";
			float hour1;
			float minute1;
			cin >> hour1;
			minute1 = hour1 * 60;
			cout << "\nTime in MINUTES = " << minute1;
			break;
		case '2':
			cout << "MINUTES TO HOURS !" << endl;
			cout << "Enter the Time in Minutes = ";
			float houri;
			float minute2;
			cin >> minute2;
			houri=minute2 / 60;
			cout << "\nTime in HOURS = " << houri;
			break;
		case '3':
			cout << "DAYS TO HOUR!" << endl;
			cout << "Enter the amount of DAYS = ";
			int day;
			int hour3;
			cin >> day;
			hour3 = day * 24;
			cout << "\nHOURS = " << hour3;
			break;
		case '4':
			cout << "HOUR TO SECONDS!" << endl;
			cout << "Enter the amount of HOURS = ";
			int sec;
			int hour4;
			cin >> hour4;
			sec = hour4 * 3600;
			cout << "\nSECONDS = " << sec;
			break;
		case '5':
			cout << "DAYS TO MINUTES!" << endl;
			cout << "Enter the amount of DAYS = ";
			int day1;
			int minute4;
			cin >> day1;
			minute4 = day * 24 * 60;
			cout << "\nMINUTES = " << minute4;
			break;
		}
	case '4':
		cout << "\n\t\t\t\t      ++++TEMPRATURE CONVERSIONS++++" << endl;
		cout << "\n1. Celsius to Fahrenheit" << endl;
		cout << "2. Fahrenheit to Celsius" << endl;
		cout << "Choice = ";
		char temp_choice;
		cin >> temp_choice;
		switch (temp_choice)
		{
		case '1':
			cout << "\nCELSIUS TO FAHRENHEIT!";
			cout << "\nEnter your temprature in CELSIUS = ";
			float cel;
			cin >> cel;
			float fah;
			fah = (9.0 / 5.0) * cel + 32;
			cout << "Temprature in FAHRENHEIT = " << fah;
			break;
		case '2':
			cout << "\nFAHRENHEIT TO CELSIUS!";
			cout << "\nEnter your temprature in FAHRENHEIT = ";
			float fah1;
			cin >> fah1;
			float cel1;
			cel1 = (5.0 / 9.0) * (fah1 - 32);
			cout << "Temprature in CELSIUS = " << cel1;
			break;
		}
	case '5':
		cout << "\n\t\t\t\t      ++++WEIGHT CONVERSIONS++++" << endl;
		cout << "\n1. Grams to Kilograms" << endl;
		cout << "\n2. Kilograms to Grams" << endl;
		cout << "\n3. Pounds to Kilograms" << endl;
		cout << "\n4. Kilograms to Pounds " << endl;
		cout << "\n5. Grams to Ounces" << endl;
		cout << "\n6. Ounces to Grams" << endl;

		cout << "Choice = ";
		char weight_choice;
		cin >> weight_choice;

		float grams, kilograms, pounds, ounces;

		switch (weight_choice)
		{
		case '1':
			cout << "GRAMS TO KILOGRAMS!" << endl;
			cout << "Enter the amount in GRAMS = ";
			cin >> grams;
			kilograms = grams / 1000;
			cout << "\nKILOGRAMS = " << kilograms;
			break;
		case '2':
			cout << "KILOGRAMS TO KILOGRAMS!" << endl;
			cout << "Enter the amount in KILOGRAMS = ";
			cin >> kilograms;
			grams = kilograms * 1000;
			cout << "\nGRAMS = " << grams;
			break;

		case '3':
			cout << "POUNDS TO KILOGRAMS!" << endl;
			cout << "Enter the amount in POUNDS = ";
			cin >> pounds;
			kilograms = pounds * 0.45359237;
			cout << "\nKILOGRAMS = " << kilograms;
			break;
		case '4':
			cout << "KILOGRAMS TO POUNDS!" << endl;
			cout << "Enter the amount in KILOGRAMS = ";
			cin >> kilograms;
			pounds = kilograms / 0.45359237;
			cout << "\nPOUNDS = " << pounds;
			break;
		case '5':
			cout << "GRAMS TO OUNCES!" << endl;
			cout << "Enter the amount in GRAMS = ";
			cin >> grams;
			ounces = grams / 28.34952;
			cout << "\nOUNCES = " << ounces;
			break;
		case '6':
			cout << "OUNCES TO GRAMS!" << endl;
			cout << "Enter the amount in OUNCES = ";
			cin >> ounces;
			grams = ounces * 28.34952;
			cout << "\nPOUNDS = " << pounds;
			break;
		}
	case '6':
		cout << "\n\t\t\t\t      ++++VOLUME CONVERSIONS++++" << endl;
		cout << "\n1. Milliliters to Liters" << endl;
		cout << "\n2. Gallons to Liters" << endl;
		cout << "\n3. Liters to Gallons" << endl;
		cout << "\n4. Liters to Milliliters " << endl;
		char volumn_choice;
		cout << "Choice = ";
		cin >> volumn_choice;
		switch (volumn_choice)
		{
		case '1':
			cout << "MILLILITERS TO LITERS!" << endl;
			cout << "Enter Volumn in Milliliters = ";
			float millil;
			cin >> millil;
			float lit;
			lit = millil / 1000;
			cout << "\nLiters = " << lit;
			break;
		case '2':
			cout << "GALLONS TO LITERS!" << endl;
			cout << "Enter Volumn in Gallons = ";
			float gal;
			cin >> gal;
			float lit2;
			lit2 = gal * 3.785;
			cout << "\nLiters = " << lit2;
			break;
		case '3':
			cout << "LITERS TO GALLON!" << endl;
			cout << "Enter Volumn in Liters = ";
			float lit3;
			cin >> lit3;
			float gal2;
			gal2 = lit3 / 3.785;
			cout << "\nGallons = " << gal2;
			break;
		case '4':
			cout << "LITERS TO MILLILITERS" << endl;
			cout << "Enter Volumn in Liters = ";
			float lit4;
			cin >> lit4;
			float millil2;
			millil2 = lit4 * 1000;
			cout << "\nMilliliters = " << millil2;
			break;
		}
	case '7':
		cout << "\n\t\t\t\t      ++++SPEED CONVERSIONS++++" << endl;
		cout << "\n1.Meters per Second to Kilometers per Hour" << endl;
		cout << "\n2.Kilometers per Hour to Meters per Second" << endl;
		cout << "\n3.Miles per Hour to Kilometers per Hour" << endl;
		cout << "\n4.Kilometers per Hour to Miles per Hour" << endl;
		char speed_choice;
		cout << "Choice = ";
		cin >> speed_choice;
		switch (speed_choice)
		{
		case '1':
			cout << "METERS PER SECOND TO KILOMETERS PER HOUR!" << endl;
			cout << "Enter Speed in Meters per Second = ";
			float meters_per_second;
			cin >> meters_per_second;
			float kilometers_per_hour;
			kilometers_per_hour = meters_per_second * 3.6;
			cout << "\nKilometers per Hour = " << kilometers_per_hour;
			break;
		case '2':
			cout << "KILOMETERS PER HOUR TO METERS PER SECOND!" << endl;
			cout << "Enter Speed in Kilometers per Hour = ";
			float kilometers_per_hour2;
			cin >> kilometers_per_hour2;
			float meters_per_second2;
			meters_per_second2 = kilometers_per_hour2 / 3.6;
			cout << "\nMeters per Second = " << meters_per_second2;
			break;
		case '3':
			cout << "MILES PER HOUR TO KILOMETERS PER HOUR!" << endl;
			cout << "Enter Speed in Miles per Hour = ";
			float miles_per_hour;
			cin >> miles_per_hour;
			float kilometers_per_hour3;
			kilometers_per_hour3 = miles_per_hour * 1.60934;
			cout << "\nKilometers per Hour = " << kilometers_per_hour3;
			break;
		case '4':
			cout << "KILOMETERS PER HOUR TO MILES PER HOUR!" << endl;
			cout << "Enter Speed in Kilometers per Hour = ";
			float kilometers_per_hour4;
			cin >> kilometers_per_hour4;
			float miles_per_hour2;
			miles_per_hour2 = kilometers_per_hour4 / 1.60934;
			cout << "\nMiles per Hour = " << miles_per_hour2;
			break;
		}
	case '8':
		cout << "\n\t\t\t\t      ++++ANGULAR CONVERSIONS++++" << endl;
		cout << "\n1. Degrees to Radians" << endl;
		cout << "\n2. Radians to Degrees" << endl;
		char angle_choice;
		cout << "Choice = ";
		cin >> angle_choice;
		switch (angle_choice)
		{
		case '1':
			cout << "DEGREES TO RADIANS!" << endl;
			cout << "Enter Angle in Degrees = ";
			float degrees;
			cin >> degrees;
			float radians;
			radians = degrees * (PI / 180.0);
			cout << "\nRadians = " << radians;
			break;
		case '2':
			cout << "RADIANS TO DEGREES!" << endl;
			cout << "Enter Angle in Radians = ";
			float radians2;
			cin >> radians2;
			float degrees2;
			degrees2 = radians2 * (180.0 / PI);
			cout << "\nDegrees = " << degrees2;
			break;
		}
	case '9':
		cout << "\n\t\t\t\t      ++++DIGITAL STORAGE CONVERSIONS++++" << endl;
		cout << "\n1. Bytes to Kilobytes" << endl;
		cout << "2. Kilobytes to Bytes" << endl;
		cout << "3. Megabytes to Gigabytes" << endl;
		cout << "4. Gigabytes to Terabytes" << endl;
		cout << "Choice = ";
		char storage_choice;
		cin >> storage_choice;
		switch (storage_choice)
		{
		case '1':
			cout << "BYTES TO KILOBYTES!" << endl;
			cout << "Enter Size in Bytes = ";
			float bytes;
			cin >> bytes;
			float kilobytes;
			kilobytes = bytes / 1024;
			cout << "\nKilobytes = " << kilobytes;
			break;
		case '2':
			cout << "KILOBYTES TO BYTES!" << endl;
			cout << "Enter Size in Kilobytes = ";
			float kilobytes2;
			cin >> kilobytes2;
			float bytes2;
			bytes2 = kilobytes2 * 1024;
			cout << "\nBytes = " << bytes2;
			break;
		case '3':
			cout << "MEGABYTES TO GIGABYTES!" << endl;
			cout << "Enter Size in Megabytes = ";
			float megabytes;
			cin >> megabytes;
			float gigabytes;
			gigabytes = megabytes / 1024;
			cout << "\nGigabytes = " << gigabytes;
			break;
		case '4':
			cout << "GIGABYTES TO TERABYTES!" << endl;
			cout << "Enter Size in Gigabytes = ";
			float gigabytes2;
			cin >> gigabytes2;
			float terabytes;
			terabytes = gigabytes2 / 1024;
			cout << "\nTerabytes = " << terabytes;
			break;
		}
	case 'X':
		cout << "1.Bohar radius = 0.0529" << endl;
		cout << "2.Faraday constant = 96,485" << endl;
		cout << "3.Phlank constant = 6.626x10^-34" << endl;
		cout << "4.Boltzman constant = 1.3806x10^-23" << endl;
		cout << "5.Speed of light in vacuum = 3x10^6" << endl;
		cout << "6.Gravitational constant = 6.673x10^-11" << endl;
		cout << "7.Elementary charge = 1.6021x10^-19" << endl;
		cout << "8.Electric Constant = 8.987x10^9" << endl;
		cout << "9.Mass of Electron = 9.1x10^-31" << endl;
		cout << "10.Mass of Proton = 1.67x10^-27" << endl;
		break;
	case 'x':
		cout << "1.Bohar radius = 0.0529" << endl;
		cout << "2.Faraday constant = 96,485" << endl;
		cout << "3.Phlank constant = 6.626x10^-34" << endl;
		cout << "4.Boltzman constant = 1.3806x10^-23" << endl;
		cout << "5.Speed of light in vacuum = 3x10^6" << endl;
		cout << "6.Gravitational constant = 6.673x10^-11" << endl;
		cout << "7.Elementary charge = 1.6021x10^-19" << endl;
		cout << "8.Electric Constant = 8.987x10^9" << endl;
		cout << "9.Mass of Electron = 9.1x10^-31" << endl;
		cout << "10.Mass of Proton = 1.67x10^-27" << endl;
		goto menu;
		break;
	case 'Y':
		cout<<"BYE BYE!";
		break;
	case 'y':
		cout<<"BYE BYE!";
		break;	
	default:

		cout << "Invalid Choice! Try Again!" << endl;
		cout << endl;
		cout << endl;
		goto menu;
	}
}
