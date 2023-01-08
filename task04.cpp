#include<iostream>
#include<windows.h>
#include<cmath>

using namespace std;

int projectTime(int neededHours , int days , int workers);

main()
{
	system("cls");
	int neededHours , days , workers , finalHours;
	while(1)
	{
		cout << endl;
		cout << "Enter Needed Hours : ";
		cin >> neededHours;
		cout << "Enter Number of days : ";
		cin >> days;
		cout << "Enter Number of Workers : "; 
		cin >> workers; 
		finalHours = projectTime(neededHours , days , workers);
		if(finalHours > neededHours)
		{
			finalHours = finalHours - neededHours;
			cout << "Yes! " << finalHours << " hours left." << endl;
		}
		if(finalHours < neededHours)
		{
			finalHours = neededHours - finalHours;
			cout << "Not enough time! " << finalHours << " hours needed." << endl;
		}
	}
}


int projectTime(int neededHours , int days , int workers)
{
	float totalHours , trainingHours , finalHours;
	totalHours = days * workers * 10.0;
	trainingHours = 0.1 * totalHours;
	finalHours = totalHours - trainingHours;
	finalHours = floor(finalHours);
	return finalHours;

}