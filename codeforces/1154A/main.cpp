#include <iostream>

using namespace std;

int main(){
	int x[4];
	int r[3];

	int maior;

	cin >> x[0] >> x[1] >> x[2] >> x[3];

	//Descobrir o maior número informado.
	for(int i = 0; i < 4; i++){
		if(i == 0) maior = x[i];
		else if (x[i] > maior) maior = x[i];
	}

	r[0] = maior / 2;
	r[1] = (maior / 2) - 1;
	r[2] = 1;

	cout << r[0] << r[1] << r[2] << endl;
}
