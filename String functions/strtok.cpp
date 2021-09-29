#include <stdio.h>
#include <string.h>
#include<iostream>
using namespace std;

//function to count number of words
int wordCount(char *s)
{
	int c=0, i=0; //c-count, i-String element
	bool word=0; 
	//counting words using do-while
	do{
		if (s[i]==' ' || s[i]=='\n' || s[i]=='\0') 
		{
			if(word)
			{
				c++;
			}
		}
		else 
		{
			word=1;
		}
	}while(s[i++]);
	
	return c;
}

int main()
{
	char text[200];
	
	cout << " Enter a line of texts: ";
	gets(text);
	
	cout << "Total number of words: " << wordCount(text);
	
}



















