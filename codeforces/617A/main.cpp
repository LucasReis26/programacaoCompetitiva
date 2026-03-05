#include <iostream>

using namespace std;

int procuraPassos(int);

int main(){
	int nSteps, eSteps;

	cin >> nSteps;

	eSteps = procuraPassos(nSteps);

	cout << eSteps << endl;

	return 0;
}

int procuraPassos(int nSteps){
	int resp = 0;
	int possibilidades[] = {5,4,3,2,1};

	if(nSteps < 5){
		resp = 1;
	}else{
		int i = 0;
		while(nSteps > 0){
			// cout << "entrei no while" << endl;
			// cout << "nSteps atual: "<< nSteps << endl;
			if(nSteps % possibilidades[i] == 0){
				nSteps /= possibilidades[i];
				resp += nSteps;
				nSteps = 0;
			}else{
				resp += nSteps / possibilidades[i];
				// cout << "Resp no momento: " << resp << endl; 
				nSteps = nSteps % possibilidades[i++];
			}
		}
	}

	return resp;
}
