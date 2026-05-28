#include <stdio.h>

long long count = 0;
int verifyLucky(long long);
int isLucky(long long );

int main(){
	long long num; 

	scanf("%lld",&num);

	if(isLucky(num)) printf("YES\n");
	else printf("NO\n");

	return 0;
}

int isLucky(long long n){
	int resp = 0;
	long long nothing = 0;

	resp = verifyLucky(n);

	if(resp && !verifyLucky(count)) resp = 0; 

	return resp;
}

int verifyLucky(long long n){
	int resp = 0;
	while(n > 0){
		int mod10 = n%10;
		if(mod10 == 4 || mod10 == 7){
			n /= 10;
			count++;
			resp++;
		}else n/=10;
	}
	return resp;
}


