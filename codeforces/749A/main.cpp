#include <iostream>

using namespace std;


void bachgoldProblem(int n){
	
	int quantidade = n / 2;

	cout << quantidade << endl;

	if(n % 2 == 0)
		for(int i = 0; i < quantidade; i++){
			cout << 2;
			if(i < quantidade - 1) cout << " ";
		}
	else{
		for(int i = 0; i < quantidade-1; i++){
			cout << 2;
			if(i < quantidade - 1) cout << " ";
		}
		cout << 3;
	}

}

int main(){
	int n;

	cin >> n;
	bachgoldProblem(n);

	return 0;
}
