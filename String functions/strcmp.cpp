#include <stdio.h>
#include <string.h>
#include<iostream>
using namespace std;

int main()
{
	char s1[100], s2[100];
	int num;
	
	cout << "Enter 1st String: ";
	gets(s1);
	cout << "Enter 2nd String: ";
	gets(s2);
	
	num = strcmp(s1,s2);
	
	if (num==0)
	{
		cout << "Both Strings are equal" << endl;
	}
	else if (num>0)
	{
		cout << "1st String is greater than 2nd String" << endl;
	}
	else
	{
		cout << "1st String is less than 2nd String" << endl;
	}	
	return 0;
}
