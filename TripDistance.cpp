#include<iomanip>
#include <iostream>
using namespace std;

int main()
{
	int current, destination, d, total=0;
	char yn;	
	// 2D array to store mileage chart
	int trip[4][4] = { {0,100,130,400} , {0,100,225,320} , {130,225,0,500} , {400,320,500,0} };
	
	cout << "TRIP DISTANCE CALCULATOR \n******************************\n";
	
	//display mileage chart
	cout << setw(7) << "CMB" << setw(5) << "KND" << setw(5) << "GAL" << setw(5) << "JFN" << endl;
	cout << "CMB" << setw(5) << "0" << setw(5) << "100" << setw(5) << "130" << setw(5) << "400" << endl;
	cout << "KND" << setw(5) << "100" << setw(5) << "0" << setw(5) << "225" << setw(5) << "320" << endl;
	cout << "GAL" << setw(5) << "130" << setw(5) << "225" << setw(5) << "0" << setw(5) << "500" << endl;
	cout << "JFN" << setw(5) << "400" << setw(5) << "320" << setw(5) << "500" << setw(5) << "0" << endl << endl;

	//get user inputs for current location and next destination
	cout << "Colombo: 1, Kandy: 2, Galle: 3, Jaffna: 4" << endl;
	cout << "Please Enter Current Location (1/2/3/4): " ;
	cin >> current;
	cout << "Please Enter Destination (1/2/3/4): " ;
	cin >> destination;
	
	//calculate the distance between 2 cities
	total = trip[current-1][destination-1];
	
	//checks if user wants to travel more
	cout << "Wish to travel more? (y/n): ";
	cin >> yn;
	//if no display total
	if (yn=='n')
	{
		cout << "Total distance: "<< total << " km";
	}
	//if yes calculate the total distance until user wants to exit trip.
	else if(yn=='y')
	{
		int temp, prior = destination; 	//for swapping 
		while (yn != 'n')
		{
			cout << "Enter Next Destination (1/2/3/4): " ;
			cin >> d;
			//calculate total
			total += trip[prior-1][d-1];	
			//swapping
			temp=prior;
			prior=d;
			
			cout << "Wish to travel more? (y/n): ";
			cin >> yn;
			
		}
		cout << "Total distance: "<< total << " km"; 
		
	}
}
