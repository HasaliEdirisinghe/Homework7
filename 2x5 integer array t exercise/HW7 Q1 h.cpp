#include<iostream>
using namespace std;

int main()
{
	int t[2][5];
	
	//nested for statement that initializes each element of t to zero
	for (int j=0; j<2; j++)
		for (int k=0; k<5; k++)
			t[j][k] = 0;
	
	//print 2D array
	for (int j=0; j<2; j++)
	{
		for (int k=0; k<5; k++)
			cout << t[j][k];
		cout << endl;
	}
}
