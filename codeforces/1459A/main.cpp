#include <iostream>

using namespace std;

string getBiggerTeam(string,string,int);

int main(){
	int testCases;

	cin >> testCases;

	for(int i = 0; i < testCases; i++){
		int numberOfCards;
		cin >> numberOfCards;
		string redDigits;
		string blueDigits;
		cin >> redDigits >> blueDigits;
		cout << getBiggerTeam(redDigits,blueDigits,numberOfCards) << endl;
	}

	return 0;
}

string getBiggerTeam(string redDigits, string blueDigits, int numberOfCards){
	int red = 0;
	int blue = 0;

	for(int i = 0; i < numberOfCards; i++){
		if(redDigits[i] > blueDigits[i]) red++;
		else if(blueDigits[i] > redDigits[i]) blue++;
	}

	if(red > blue) return "RED";
	else if(red < blue) return "BLUE";
	else return "EQUAL";
}
