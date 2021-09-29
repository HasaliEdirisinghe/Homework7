#include<iostream>
using namespace std;

int main()
{
	int t[2][5] = {{2,8,5,4,7},{-5,0,-7,-2,6}}; //dummy values
	
	for (int j=0; j<2; j++)
	{
		for (int k=0; k<5; k++)
		{
			if (j==0 && k<5)
			{
				cout<<"t["<<j<<"]["<<k<<"] : "<< t[j][k] <<endl;
			}
		}
		cout << endl;
	}
}

