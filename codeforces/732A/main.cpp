#include <iostream>

using namespace std;


int buyA_Shovel(int k, int r){
	int valorInicial = k;
	int count = 1;
	while((k % 10) != r && (k % 10) != 0){
		count++;
		k+=valorInicial;
	}
	return count;
}

int main(){
	int shovelPrice, oneCoin;
	cin >> shovelPrice >> oneCoin;
	cout << buyA_Shovel(shovelPrice,oneCoin);
	return 0;
}
