#include <iostream>

using namespace std;

int nDigitSum(int N){
	int resp = 0;

	while(N > 0){
		resp += N % 10;
		N /= 10;
	}


	return resp;
}

int digitSum(int N, int K){
	int resp = 0;

	for(int i = 1; i <= N; i++){
		int somaDigitos = nDigitSum(i);
		if(somaDigitos == K){
			resp++;
		}
	}

	return resp;
}

int main(){
	int N, K;

	cin >> N >> K;

	cout << digitSum(N,K);
}
