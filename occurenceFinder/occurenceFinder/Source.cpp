#include <iostream>
#include <string>

using namespace std;


void findMost(string tester) {
	string charList = "";
	int maxCount = 0;
	char maxChar = ' ';

	for (int i = 0; i < tester.length(); i++) {
		//Go through tester chars individually

		int tempCount = 0;

		//If the testing char cannot be found in the tested list then run test
		if (charList.find(tester[i]) > tester.length()) {
			charList += (tester[i]);

			//Test how many occurences are found
			for (int j = i; j < tester.length(); j++) {
				if (tester[j] == tester[i]) {
					tempCount++;
				}
			}
		}
		
		//Set maximum char and frequency if applicable
		if (tempCount > maxCount) {
			maxCount = tempCount;
			maxChar = tester[i];
		}
		
	}

	//Output statements
	cout << "The tested string is " << tester << "\n";
	cout << "The most frequently occuring character is: " << maxChar;
	cout << "\n" << "It occurs " << to_string(maxCount) << " times" << "\n";

}




int main() {

	string test = "aabbbccdddeeee";
	findMost(test);
	findMost("qqqqwwwweerrreeeoopp");

	system("pause");
	return 0;
}