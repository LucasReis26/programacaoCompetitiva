#include <stdio.h>

int palindromic(char* w, int length){
	int resp = 0;
	
	for(int i = 0; i < (length/2); i++){
		if(w[i] != w[length - i - 1]){
			int calculo = (int) w[i] - (int) w[length - i - 1];
			if(calculo == 2 || calculo == -2) resp = 1;
			else{ resp = 0; i = length;}
		}else{
			resp = 1;
		}
	}

	return resp;
}

int main(){
	int testCases;

	scanf("%d",&testCases);
	getchar();

	for(int i = 0; i < testCases; i++){
		int length;

		scanf("%d",&length);
		getchar();

		char word[length];

		scanf("%s",word);
		getchar();
		if(palindromic(word,length)) printf("YES\n");
		else printf("NO\n");
	}

	return 0;
}
