#include <iostream>
#include <iomanip>

using namespace std;

float probabilidadeDeDarCerto(string a, string b){
	int plus = 0, minus = 0, error = 0;

	for(int i = 0; i < a.length(); i++){
		if(a[i] == '+') plus++;
		else minus++;
		if(b[i] == '+') plus++;
		else if(b[i] == '-') minus++;
		else error++;
	}

	if(error == 0){
		if(plus == minus) return 1.0F;
	}
	else return 0.0F;
}

int main(){
	string drazilCommands, dreamonsCommands;

	cin >> drazilCommands >> dreamonsCommands;


	cout << fixed << setprecision(12);
	cout << probabilidadeDeDarCerto(drazilCommands,dreamonsCommands) << endl;

	return 0;
}
