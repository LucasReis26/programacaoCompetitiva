#include <iostream>

using namespace std;

void getDivisors(int num, int n, int k){
	int divisors[n];
	bool resp = false;
	for(int i = 0; i < n; i++){
		cin >> divisors[i];
	}
	for(int d : divisors){
		if(num % d != 0){
			// cout << num << " % "<< d << " = " << d % num << endl;
			cout << "NO" << endl;
			resp = true;
			break;
		}
	}
	if(!resp){
		int total = 1;
		int i = 1;
		for(int d : divisors){
			total *= d;
		}
		if(num % total != 0){
			cout << "NO" << endl;
		}else{
			cout << "YES" << endl;
			for(int i = 0; i < k; i++){
				if(i == 0) cout << num / total << " ";
				else cout << 1;
				if(i < k - 1) cout << " ";
			}
			cout << endl;
		}
	}
}

int main(){
	int testCases;

	cin >> testCases;

	for(int i = 0; i < testCases; i++){
		int n;
		int k;
		cin >> n >> k;
		getDivisors(2023,n,k);
	}
}
