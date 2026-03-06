#include <iostream>

using namespace std;

int main(){
	int x[4];

	int maior = 0;

	cin >> x[0] >> x[1] >> x[2] >> x[3];

	//Descobrir o maior número informado.
	int i;
	for(i = 1; i < 4; i++){
		if(x[maior] < x[i]){
			maior = i;
		}
	}
	i--;
	int aux = x[maior];
	x[maior] = x[i];
	x[i] = aux;

	cout << (x[0] + x[2]) - x[3] << " ";
	cout << (x[0] + x[1]) - x[3] << " ";
	cout << (x[1] + x[2]) - x[3] << " ";

	return 0;
}
