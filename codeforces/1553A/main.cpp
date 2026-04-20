#include <iostream>

using namespace std;


int getInteresting(int x){
	return (x + 1) / 10; //Apenas números terminados em 9 são interessantes, queremos pegar a quantidade de números terminados em 9
}

int main(){
	int ncases;

	cin >> ncases;

	for(int i = 0; i < ncases; i++){
		int num;
		cin >> num;
		cout << getInteresting(num) << endl;
	}

	return 0;
}
