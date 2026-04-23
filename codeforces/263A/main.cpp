#include <iostream>

using namespace std;

int main(){
	int matrix[5][5];

	int x, y, resp = 0;

	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			cin >> matrix[i][j];
			if(matrix[i][j]){
				x = i;
				y = j;
			}
		}
	}

	if(x > 2){
		resp += x - 2;
	}else{
		resp += 2 - x;
	}
	if(y > 2){
		resp += y - 2;
	}else{
		resp += 2 - y;
	}

	cout << resp << endl;

	return 0;
}
