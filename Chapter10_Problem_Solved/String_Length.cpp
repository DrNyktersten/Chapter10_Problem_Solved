#include <iostream>
#include <string>	
using namespace std; 
int CountCharacters(string* ptr);		//Function prototype

int main()
{
	string user;						//user input
	int value;							//To hold return value of a string
	cout << "Please enter a string : ";	//message to user
	getline(cin, user);					//user input
	value = CountCharacters(&user);		//argument passed to a function 

	cout << value << endl; 
	return 0; 
}


int CountCharacters(string* userInput)
{
	int total = 0;				//return variable 
	total = userInput->size();	//Assigning size of the string to int
	return total; 
}
