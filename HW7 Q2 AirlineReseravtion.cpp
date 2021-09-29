#include<iostream>
using namespace std;

bool firstclass = false; 
bool economy = false; 

//function to reserve seata
int reserve(int arr[10], int classType) 
{
	if(classType==1)
	{
		for(int i=0; i<5; i++)
		{
			if(arr[i] == 0)
			{
				arr[i] = 1; //set element to 1 so that it's indicates seat is no longer avalible
				cout<< "Class: First Class \tSeat: " << i+1 << endl << endl;
				break;
			}	
		}
		if(arr[4] == 1)
		{
			firstclass = true;
		}		
	}
	else if(classType == 2)
	{
		for(int i=5; i<10; i++)
		{
			if(arr[i] == 0)
			{
				arr[i] = 1; //set element to 1 so that it's indicates seat is no longer avalible
				cout<< "Class: First Class \tSeat: " << i+1 << endl << endl;
				break;
			}	
		}
		if(arr[9] == 1)
		{
			economy = true;
		}		
	}	
}


int main()
{
	int seats[10]={0}; //array elements initialized to 
	int option, selected;
	
	while( ! firstclass || ! economy )
	{
		cout << "Welcome to ABC Airlines \n*****************************\n" ;
		cout << "Please Type 1 for 'First Class' or Type 2 for 'Economy': " ;
		cin >> option;
	
		reserve(seats, option);
		
		if (firstclass && option==1)
		{
			cout << "First class is Full!" << endl;
			cout << "Would you like to fly Economy? (Yes-1|No-0): " ;
			cin >> selected;
			
			if (selected == 1)
			{
				reserve(seats, 2);
			}
			else if (selected == 0)
			{
				cout << "Next flight leaves in 3 hours" << endl << endl;
			}
			else
			{
				cout << "Invalid!" << endl;
			}
		}
		else if (economy && option==2)
		{
			cout << "Economy class is Full!" << endl;
			cout << "Would you like to fly First Class? (Yes-1|No-0): " ;
			cin >> selected;
			
			if (selected == 1)
			{
				reserve(seats, 1);
			}
			else if (selected == 0)
			{
				cout << "Next flight leaves in 3 hours" << endl << endl;
			}
			else
			{
				cout << "Invalid" << endl;
			}	
		}
	}	
	
}






