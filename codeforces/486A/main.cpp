#include <iostream>
#include <math.h>

using namespace std;

long long function(int n){
	return (pow(-1,n)*(2*n + 1)-1)/4;
}

int main(){
	long long n;

	cin >> n;
	cout << function(n);

	return 0;
}
