#include <iostream>
#include <string>

using namespace std;

int countWords(string str);

int main(void) {
	
	string input;
	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, input);
		if (input == "Q" || input == "q") break;

		else {
			cout << "Word count: " << countWords(input) << endl;
		}
	}
	return 0;
}

int countWords(string str) {
	int numWords = 1;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ') {
			if (str[i - 1] != ' '){
				numWords++;
			}
		}
	}

	return numWords;
}

