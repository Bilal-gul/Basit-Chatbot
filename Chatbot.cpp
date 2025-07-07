#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <cctype>
#include <clocale>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"Turkish");
		
	map<string, string> myDictionary;
	string answer;
	
	myDictionary.insert(pair<string, string>("hello", "Hello, How are you?"));
	myDictionary.insert(pair<string, string>("how are you today", "Good, and you?"));
	myDictionary.insert(pair<string, string>("i am good", "I am pleased that you are well :)"));
	myDictionary.insert(pair<string, string>("see you later", "See you later, let's not keep too much distance <3"));
	myDictionary.insert(pair<string, string>("how is the weather", "The weather is sunny today. Perfect for a walk outside. :)"));
	
	do{
		cout << " > User: ";
		getline(cin, answer);
		
		transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
		
		cout << " > Chatbot: ";
		if(myDictionary.count(answer)){
			cout << myDictionary[answer] << endl;
		}else
		cout << "I don't understand. Can you repeat it?" << endl;
		
		cout << endl;
		
	}while(answer != "see you later");
	
	
	return 0;
}
