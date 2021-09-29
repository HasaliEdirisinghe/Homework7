#include<iostream>
using namespace std;

int main()
{
	int t[2][5] = {{2,8,5,4,7},{-5,0,-7,-2,6}}; //dummy values
	int sum;
	
	for (int j=0; j<2; j++)
	{
		for (int k=0; k<5; k++)
		{
			if (k==3 && j<2)
			{
				sum = sum + t[j][k];
			}
		}
	}
	cout << "Total of the elements in 4th row: " << sum;
}

