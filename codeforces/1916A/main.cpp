#include <iostream>

using namespace std;

void getSequenceB(int* array, int len){
	for(int i = 0; i < len; i++){
		cin >> array[i];
	}
}

int multArray(int* array, int len){
	int resp = 1;
	for(int i = 0; i < len; i++){
		resp *= array[i];
	}
	return resp;
}

bool verifySequenceB(int* array, int len){
	bool resp = true;
	for(int i = 0; i < len; i++){
		if((2023 % array[i]) != 0){
			i = len;
			resp = false;
		}
	}
	int bProduct = multArray(array,len);

	if((2023 % bProduct) > 0) resp = false;

	return resp;
}

void preencheNumeros(int* array, int len,int falta){
	int i = 0;
	if(falta == 1){
		array[0] = 7;
		array[1] = 17;
		array[2] = 17;
		i = 3;
	}
	for(i; i < len; i++){

	}
}

void getSequenceA(){
	int N, K;

	cin >> N >> K;

	int sequenceB[N];

	getSequenceB(sequenceB,N);

	if(verifySequenceB(sequenceB,N)){
		int nFaltantes[K];

		int bProduct = multArray(sequenceB,N);

		int falta = 2023 / bProduct;

		preencheNumeros(nFaltantes,K,falta);

		cout << "bProduct: " << bProduct << endl;
		cout << "Falta: " << falta << endl;
	}else{
		cout << "NO" << endl;
	}
}

int main(){
	int T;

	cin >> T;

	for(int i = 0; i < T; i++){
		getSequenceA();
	}

	return 0;
}
