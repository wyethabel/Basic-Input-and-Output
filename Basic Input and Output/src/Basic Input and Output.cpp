//============================================================================
// Author      : Wyeth Abel
// Description : Basic application that utilizes a custom string concatenation
//				 function in order to combine two strings entered by a user
//               through the console, with a printed result.
//============================================================================

#include <iostream>

using namespace std;

// Implemented as a function for better modularity
void concatenation() {
	string firstString, secondString;

	/* getline() used in this instance to avoid cin holding the newline entry
	 * in the input buffer causing it to skip the second string entry request.
	 */
	cout << "Please enter the first string: " << endl;
	getline(cin, firstString);
	cout << "Please enter the second string: " << endl;
	getline(cin, secondString);
	cout << "The combined strings are: " << firstString + " " + secondString << endl;
}

int main() {

	// Called three times to meet assignment requirements
	concatenation();
	concatenation();
	concatenation();

	return 0;
}
