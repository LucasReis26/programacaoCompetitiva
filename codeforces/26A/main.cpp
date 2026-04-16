#include <iostream>

using namespace std;

bool ehPrimo(int n){
	bool resp = false;
	int count = 0;

	for(int i = 2; i < n; i++){
		if(n % i == 0) count++;
	}

	if(count > 0) return false;
	else return true;
}

bool verifyAlmostPrime(int n){
	int count = 0;

	for(int i = 2; i < n; i++){
		if(n % i == 0 && ehPrimo(i)) count++;
	}
	
	if(count == 2) return true;
	else return false;
}

int almostPrime(int n){
	int count = 0;
	for(int i = 1; i <= n; i++){
		if(verifyAlmostPrime(i)) count++;
	}
	return count;
}

int main(){
	int n;
	cin >> n;
	cout << almostPrime(n);
	return 0;
}
