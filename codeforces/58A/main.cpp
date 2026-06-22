#include <iostream>
#include <string>

using namespace std;

string sayHello(string);

int main(){
	string word;

	cin >> word;

	cout << sayHello(word) << endl;

	return 0;
}

string sayHello(string word){
	string hello = "hello";
	string newString = "";

	for(int i = 0, j = 0; i < word.length() && j < hello.length(); i++){
		if(word[i] == hello[j]) j++; 

		if(j == 5) return "YES";
	}

	return "NO";
}
