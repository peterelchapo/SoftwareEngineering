#include <iostream>
using namespace std;

void displayBanner(int stringLen)
{
	for (unsigned int n = 0; n < (stringLen + 4); n++) {
		cout << "*";
	}
	cout << endl;
}


void DisplayWithBanner(string z) {

	int L = z.length();			//L is now a LOCAL variable

	//Write the banner above
	displayBanner(L);

	cout << "* ";				//Leading *
	cout << z;			//Message
	cout << " *" << endl;		//Trailing *
	displayBanner(L);
}


int main()
{
	const string message = "Welcome to Computer Science";

	//Get the length of the string
	
	//Write the banner below
	DisplayWithBanner(message);

	//Tell the calling shell all is well
	return 0;
}

