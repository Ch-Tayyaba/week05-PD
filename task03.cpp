#include<iostream>
#include<windows.h>

using namespace std;

float taxCalculator(char type , float price);

main()
{
	system("cls");
	float price;
	char type;
	float finalPrice;
      while(true)
	{
		cout << endl;
		cout << "Enter price of vehicle : ";
		cin >> price;
		cout << "Enter vehicle code in upper case : ";
		cin >> type;
		finalPrice = taxCalculator(type , price);
		if(type == 'M')
		{
			cout << "The final price on a vehicle of type Motorcycle after adding the tax is " << finalPrice << endl;
		}
		if(type == 'E')
		{
			cout << "The final price on a vehicle of type Electric after adding the tax is " << finalPrice << endl;
		}
		if(type == 'S')
		{
			cout << "The final price on a vehicle of type Sedan after adding the tax is " << finalPrice << endl;
		}
		if(type == 'V')
		{
			cout << "The final price on a vehicle of type Van after adding the tax is " << finalPrice << endl;
		}
		if(type == 'T')
		{
			cout << "The final price on a vehicle of type Truck after adding the tax is " << finalPrice << endl;
		}
	}

}


float taxCalculator(char type , float price)
{
	float taxAmount;
	float finalAmount;
	if(type == 'M')
	{
		taxAmount = 0.06 * price;
		finalAmount = taxAmount + price;
		return finalAmount; 
	}	
	if(type == 'E')
	{
		taxAmount = 0.08 * price;
		finalAmount = taxAmount + price;
		return finalAmount; 
	}
	if(type == 'S')
	{
		taxAmount = 0.1 * price;
		finalAmount = taxAmount + price;
		return finalAmount; 
	}
	if(type == 'M')
	{
		taxAmount = 0.12 * price;
		finalAmount = taxAmount + price;
		return finalAmount; 
	}
	if(type == 'M')
	{
		taxAmount = 0.15 * price;
		finalAmount = taxAmount + price;
		return finalAmount; 
	}
	return 0;
}