#include<iostream>
using namespace std;

int main()
{
	int t[2][5];
	int temp; 		
	
	for (int j=0; j<2; j++)
	{
		for (int k=0; k<5; k++)
		{
			cout << "t[" << j << "][" << k << "] : ";
			cin >> temp;
			t[j][k] = temp;	
		}
	} 
}

