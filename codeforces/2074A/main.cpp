#include <iostream>

using namespace std;

string verificaQuadrado(int l, int r, int d, int u){
	string resp = "No";

	if(l == r && r == d && d == u){
		resp = "Yes";
	}

	return resp;
}

int main(){
	int testCases;

	cin >> testCases;

	for(int i = 0; i < testCases; i++){
		int l, r, d, u;
		cin >> l >> r >>  d >> u;
		cout << verificaQuadrado(l,r,d,u) << endl;
	}

	return 0;
}
