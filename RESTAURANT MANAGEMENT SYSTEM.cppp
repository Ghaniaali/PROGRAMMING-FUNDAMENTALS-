#include <iostream>
using namespace std;

int main()
{
	int option, n, option2, totalbill, tax, i = 0, taxbill, mealprice, usd = 165, euro = 193, pkr = 1;
	float quantity;
	int chickenkarai = 1800, chickentikka = 2000, chickenhaleem = 2200, creamychicken = 2500, chickenhandi = 800;

	do
	{
              	              cout << "________________________________________" << endl;
		cout << "_________Welcome to my Restaurant_______" << endl;
		cout << "______What would you like to order?_____" << endl;
		cout << "**Enter 1 for Chicken Karai (Rs 1800)**" << endl;
		cout << "**Enter 2 for Chicken Tikka (Rs 2000)**" << endl;
		cout << "**Enter 3 for Chicken Haleem (Rs 2200)**" << endl;
		cout << "**Enter 4 for Creamy Chicken (Rs 2500)**" << endl;
		cout << "**Enter 5 for Chicken Handi (Rs 800)**" << endl;
		cout << "**Enter 0 to exit the program**" << endl;
		cin >> option;

		switch (option)
		{
		case 1:
			cout << "Enter Quantity in Kilograms (Eg: 1, 1.5 etc):" << endl;
			cin >> quantity;
			do
			{
				if (quantity <= 0)
				{
					cout << "Invalid Quantity,Please Try again" << endl;
					cin >> quantity;
				}else{
					mealprice = chickenkarai * quantity;

					mealprice = i + mealprice;
					i = mealprice;
				}

            } while (quantity <= 0);
			cout << "Do you want to purchase more items? (Type '1' for Yes, any other key for No):" << endl;
			cin >> n;
			switch (n)
			{
			case 1:
				continue;
			
			default:
				cout<<"Press Any key to continue"<<endl;
				break;
			}
			break;

		case 2:
			cout << "Enter Quantity in Kilograms (Eg: 1, 1.5 etc):" << endl;
			cin >> quantity;
			do
			{
				if (quantity <= 0)
				{
					cout << "Invalid Quantity,Please Try again" << endl;
					cin >> quantity;
				}else{
					mealprice = chickenkarai * quantity;

					mealprice = i + mealprice;
					i = mealprice;
				}

            } while (quantity <= 0);

			cout << "Do you want to purchase more items? (Type '1' for Yes, any other key for No):" << endl;
			cin >> n;
			switch (n)
			{
			case 1:
				continue;
			
			default:
				cout<<"Press Any key to continue"<<endl;
				break;
			}
			break;

		case 3:
			cout << "Enter Quantity in Kilogram (Eg: 1, 1.5 etc):" << endl;
			cin >> quantity;
			do
			{
				if (quantity <= 0)
				{
					cout << "Invalid Quantity,Please Try again" << endl;
					cin >> quantity;
				}else{
					mealprice = chickenkarai * quantity;

					mealprice = i + mealprice;
					i = mealprice;
				}

            } while (quantity <= 0);

			cout << "Do you want to purchase more items? (Type '1' for Yes, any other key for No):" << endl;
			cin >> n;
			switch (n)
			{
			case 1:
				continue;
			
			default:
				cout<<"Press Any key to continue"<<endl;
				break;
			}
			break;

		case 4:
			cout << "Enter Quantity in Kilograms (Eg: 1, 1.5 etc):" << endl;
			cin >> quantity;
			do
			{
				if (quantity <= 0)
				{
					cout << "Invalid Quantity,Please Try again" << endl;
					cin >> quantity;
				}else{
					mealprice = chickenkarai * quantity;

					mealprice = i + mealprice;
					i = mealprice;
				}

            } while (quantity <= 0);

			cout << "Do you want to purchase more items? (Type '1' for Yes, any other key for No):" << endl;
			cin >> n;
			switch (n)
			{
			case 1:
				continue;
			
			default:
				cout<<"Press Any key to continue"<<endl;
				break;
			}
			break;

		case 5:
			cout << "Enter Quantity in Kilograms (Eg: 1, 1.5 etc):" << endl;
			cin >> quantity;
			do
			{
				if (quantity <= 0)
				{
					cout << "Invalid Quantity,Please Try again" << endl;
					cin >> quantity;
				}else{
					mealprice = chickenkarai * quantity;

					mealprice = i + mealprice;
					i = mealprice;
				}

            } while (quantity <= 0);

			cout << "Do you want to purchase more items? (Type '1' for Yes, any other key for No):" << endl;
			cin >> n;
			switch (n)
			{
			case 1:
				continue;
			
			default:
				cout<<"Press Any key to continue"<<endl;
				break;
			}
			break;

		default:
			cout << "Please check the correct menu code" << endl;
			continue;
		}

		// Tax Calculation:
		if (mealprice <= 1000)
		{
			taxbill = mealprice;
		}
		else if (mealprice > 1000 && mealprice <= 3000)
		{
			tax = mealprice * 2 / 100;
			taxbill = mealprice + tax;
		}
		else
		{
			tax = mealprice * 5 / 100;
			taxbill = mealprice + tax;
		}

		cout << "In which Currency do you wish to purchase?" << endl;
		cout << "1) Pakistani Rupees" << endl;
		cout << "2) Euro " << endl;
		cout << "3) Dollar " << endl;
		cin >> option2;

		if (option2 == 1)
		{
			mealprice = mealprice;
			tax = tax;
			taxbill = taxbill;
			cout << "Your meal price: pkr" << mealprice << endl;
			cout << "Your sales tax: pkr" << tax << endl;
			cout << "Your Total bill: pkr" << taxbill << endl;
			cout << "Thank you for your purchase!" << endl;
		}
		else if (option2 == 2)
		{
			mealprice = mealprice / euro;
			tax = tax / euro;
			taxbill = taxbill / euro;
			cout << "Your meal price: Euro " << mealprice << endl;
			cout << "Your sales tax: Euro " << tax << endl;
			cout << "Your Total bill: Euro " << taxbill << endl;
			cout << "Thank you for your purchase!" << endl;
		}
		else if (option2 == 3)
		{
			mealprice = mealprice / usd;
			tax = tax / usd;
			taxbill = taxbill / usd;
			cout << "Your meal price: $" << mealprice << endl;
			cout << "Your sales tax: $" << tax << endl;
			cout << "Your Total bill: $" << taxbill << endl;
			cout << "Thank you for your purchase!" << endl;
		}
		else
		{
			cout << "Invalid input,Please try again" << endl;
			cin >> option2;
		}
		cout << "Do you wish to exit the program? (Type '0' for Yes, any other key for No)" << endl;
		cin >> option;
		
	} while (option != 0);
	return 0;
}

