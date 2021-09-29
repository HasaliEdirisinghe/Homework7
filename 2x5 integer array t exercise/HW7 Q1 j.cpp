#include <iostream>
using namespace std;

int main()
{
	int t[2][5];
	
	for (int j=0; j<2; j++)
		for (int k=0; k<5; k++)
		{
			int inputs;
			cout << "Enter element: ";
			cin >> inputs;
			
			t[j][k] = inputs;			
		}
	
	int small = t[0][0];
	for (int j=0; j<2; j++)
	{
		for (int k=0; k<5; k++)
		{
			if (t[j][k] < small)
			{
				small = t[j][k];
			}
		}
	}
	cout << "Smallest value in t is: " << small << endl;
}
