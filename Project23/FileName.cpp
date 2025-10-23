#include <iostream>
#include <string>

using namespace std;

int countWords(string str);

int main(void) {
	
	string s = "dog dog";

	cout << "Word count: " << countWords(s) << endl;
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

