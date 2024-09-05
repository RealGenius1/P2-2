/* P2-2  Spencer Thomas 9/5/2024
* This program will introduce itself, then ask for the users name, then say hello using that input
*/

#include <string>
#include <iostream>
using namespace std;

int main() {
	cout << "Hello, my name is Hal!\n";
	cout << "What is your name? ";
	string user_input;
	getline(cin, user_input);
	cout << "Hello, " << user_input << ". I am glad to meet you!";
}