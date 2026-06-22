#include <iostream>
#include <string>

using namespace std;

int numberOfCharacters(string);

int main(){
	int stringLength;
	string fileName;

	cin >> stringLength >> fileName;

	cout << numberOfCharacters(fileName) << endl;

	return 0;
}

int numberOfCharacters(string fileName){
	int resp = 0;
	int countX = 0;
	for(int i = 0; i < fileName.length(); i++){
		if(fileName[i] == 'x') { 
			countX++; 
			if(countX >= 3) resp++;
		}else countX = 0;
	}
	return resp;
}
