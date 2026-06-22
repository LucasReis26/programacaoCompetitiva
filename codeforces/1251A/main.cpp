#include <iostream>
#include <string>

using namespace std;

void selectionSort(string&);
bool foraDaResp(char,string);
string getCorrectlyButtons(string);

int main(){
	int testCases;

	cin >> testCases;

	string s;

	for(int i = 0; i < testCases; i++){
		cin >> s;

		cout << getCorrectlyButtons(s) << endl;
	}

	return 0;
}

string getCorrectlyButtons(string s){
	string resp = "";

	if(s.length() == 1) return s;
	else{
		for(int i = 0; i < s.length(); i++){
			if(foraDaResp(s[i],resp)){
				int count = 0;
				for(int j = 0; j < s.length(); j++){
					while(s[j] == s[i]){
						j++;
						count++;
					}
					if(count % 2) { resp += s[i]; j = s.length(); }
				}
			}
		}
	}
	selectionSort(resp);

	return resp;
}

void selectionSort(string& s){
	if(s.length()){
		for(int i = 0; i < s.length() - 1; i++){
			int menor = i;
			for(int j = i + 1; j < s.length(); j++){
				if(s[j] < s[menor]) menor = j;
			}
			char temp = s[menor];
			s[menor] = s[i];
			s[i] = temp;
		}
	}
}

bool foraDaResp(char c, string s){
	bool resp = true;
	for(int i = 0; i < s.length(); i++){
		if(c == s[i]) { resp = false; i = s.length(); }
	}
	return resp;
}

