#include <stdio.h>
#include<iostream>
#include <string.h>

using namespace std;

int main()
{
	char s[100];
	
	cout << "Enter a line of texts: ";
	gets(s);
	
	cout << "Uppercase: " << strupr(s) << endl;
	cout << "Lowercase: " << strlwr(s) << endl; 
	
	return 0;
}
