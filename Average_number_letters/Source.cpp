#include <iostream>
using namespace std;
int WordsInString(const char*);
double averageNumberOfLetters(const char*, const int); 

int main()
{
	const int SIZE = 60;
	char words[SIZE];

	cout << "Enter a string : ";
	cin.getline(words, SIZE);

	int number_of_words = WordsInString(words); 
	double average_number_of_letters = averageNumberOfLetters(words, number_of_words); 

	cout << "Your sentence has " << number_of_words
		 << " words.\n"
		 << endl; 

	cout << "The average number of letters in each word = "
	   	 << average_number_of_letters
	 	 << endl; 
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

double averageNumberOfLetters(const char* userInput, const int number_of_words)
{
	int count = 0; 
	while (*userInput != '\0')
	{
		if (isalpha(*userInput))
			count++;

		userInput++;
	}
	return (static_cast<double>(count) / static_cast<double>(number_of_words));
}