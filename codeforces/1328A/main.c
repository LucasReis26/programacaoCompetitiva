#include <stdio.h>

int getADivisible(int,int);

int main(){
	int n;
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		int a,b;
		scanf("%d %d",&a,&b);
		printf("%d\n",getADivisible(a,b));
	}
	return 0;
}

int getADivisible(int a,int b){
	if(a%b == 0) return 0;
	else return b - (a%b);
}
