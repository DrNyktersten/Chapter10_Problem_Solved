#include <iostream>
using namespace std; 
int WordsInString(const char*); 

int main()
{
	const int SIZE = 60; 
	char words[SIZE]; 

	cout << "Enter a string : "; 
	cin.getline(words, SIZE); 

	cout << "Total number of words in a sentence : "
		 << WordsInString(words); 
	return 0; 
}


int WordsInString(const char* userInput)
{
	int count = 0; 

	while (*userInput != '\0')
	{
		if (*userInput == ' ')
			count++; 
		userInput++; 
	}

	return (count + 1); 
}