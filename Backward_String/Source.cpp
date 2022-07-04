#include <iostream>
using namespace std; 
void BackwardString(const char*); 

int main()
{
	const int SIZE = 20; 
	char userInput[SIZE];
	int count = 0; 

	cout << "Enter a string and I will display it backwards : "; 
	cin >> userInput; 

	BackwardString(userInput); 

	return 0; 
}

void BackwardString(const char* userInput)
{
	for (int i = strlen(userInput); i >= 0; i--)
	{
		cout << userInput[i]; 
	}
}
