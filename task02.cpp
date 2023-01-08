#include<iostream>
#include<windows.h>

using namespace std;

float volumeInMeters(float , float , float);
float volumeInKilometers(float , float , float);
float volumeInCentimeters(float , float , float);
float volumeInMilimeters(float , float , float);

main()
{
	system("cls");
	float length;
	float width;
	float height;
	float pyramidVolume;
	string unit;
	while(true)
	{
		cout << endl << endl;
		cout << "Enter lenght in meters : ";
		cin >> length;
		cout << "Enter width in meters : ";
		cin >> width;
		cout << "Enter height in meters : ";
		cin >> height;
		cout << "Enter unit for output in lower case : "; 		
		cin >> unit;
		if(unit == "meters")
		{	
			pyramidVolume = volumeInMeters(length , width , height);
			cout << "Volume of Pyramid = " << pyramidVolume << " cubic meters." <<endl;
		}
		if(unit == "kilometers")
		{
			pyramidVolume = volumeInKilometers(length , width , height);
			cout << "Volume of Pyramid = " << pyramidVolume << " cubic kilometers." <<endl;	
		}
		if(unit == "centimeters")
		{
			pyramidVolume = volumeInCentimeters(length , width , height);
			cout << "Volume of Pyramid = " << pyramidVolume << " cubic centimeters." <<endl;	
		}
		if(unit == "milimeters")
		{
			pyramidVolume = volumeInMilimeters(length , width , height);
			cout << "Volume of Pyramid = " << pyramidVolume << " cubic milimeters." <<endl;	
		}
	}
}


float volumeInMeters(float length , float width , float height)
{
	float volume = 0.33 * length * width * height;
	return volume;
}

float volumeInKilometers(float length , float width , float height)
{
	float volume = volumeInMeters(length , width , height);
	float volumeInKilometers = 0.000000001 * volume;
	return volumeInKilometers;
}

float volumeInCentimeters(float length , float width , float height)
{
	float volume = volumeInMeters(length , width , height);
	float volumeInCentimeters = 1000000 * volume;
	return volumeInCentimeters;
}

float volumeInMilimeters(float length , float width , float height)
{
	float volume = volumeInMeters(length , width , height);
	float volumeInMilimeters = 1000000000 * volume;
	return volumeInMilimeters;
}















