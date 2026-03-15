#include <iostream>

using namespace std;

int pow(int a, int b){
	int resp = 1;

	for(int i = 0; i < b; i++){
		resp *= a;
	}

	return resp;
}

int main(){
	int N;

	cin >> N;

	cout << pow(2,N) - (2*N);

	return 0;
}
