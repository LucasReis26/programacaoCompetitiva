#include <iostream>

using namespace std;

int pow(int a, int b){
	int resp = 1;

	while(b > 0){
		resp *= a;
		b--;
	}

	return resp;
}

int sumDigits(int N){
	int resp = 0;

	while(N > 0){
		resp += pow(N % 10,2);
		N /= 10;
	}

	return resp;
}

string happyNumber(int N){

	int count = 10;
	int somaDigitos = sumDigits(N);

	while(somaDigitos != 1 && count > 0){
		somaDigitos = sumDigits(somaDigitos);
		count--;
	}
	if(somaDigitos == 1){
		return "Yes";
	}else{
		return "No";
	}
}

int main(){
	int N;

	cin >> N;

	cout << happyNumber(N) << endl;

	return 0;
}
