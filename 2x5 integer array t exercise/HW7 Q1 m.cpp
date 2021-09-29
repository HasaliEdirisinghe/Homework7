#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int t[2][5] = {{2,8,5,4,7},{-5,0,-7,-2,6}}; //dummy values

	cout << setw(7) << "C1" << setw(5) << "C2" << setw(5) << "C3" << setw(5) << "C4" << setw(5) << "C5" << endl;
	
	for(int j=0; j<2; j++)
	{
		cout << "R" << j+1;
		for(int k=0; k<5; k++)
		{
			cout  << setw(5) << t[j][k];
		}
		cout << "\n";
	}
}
