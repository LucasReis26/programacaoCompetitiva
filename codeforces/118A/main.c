#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int vogal(char);
char* stringTask(char*,int);

int main(){

	char* string = (char*)malloc(100*sizeof(char));

	scanf("%s",string);

	char* newString = stringTask(string,strlen(string));

	printf("%s",newString);

	free(string);
	free(newString);

	return 0;
}

char* stringTask(char* s,int sLength){
	char* resp = (char*)malloc((2*(sLength+1))*sizeof(char));

	resp[0] = '.';
	
	for(int i = 0, j = 1; i < sLength; i++){

		if(!vogal(s[i])){
			if(s[i] <= 'a') resp[j] = s[i] + 32;
			else resp[j] = s[i];
			j++;
			resp[j] = '.';
			j++;
		}
		if(i == sLength-1) resp[j-1] = '\0';
	}

	return resp;
}

int vogal(char c){
	int A = c == 'A' || c == 'a';
	int E = c == 'E' || c == 'e';
	int I = c == 'I' || c == 'i';
	int O = c == 'O' || c == 'o';
	int U = c == 'U' || c == 'u';
	int Y = c == 'Y' || c == 'y';
	int vogal = A || E || I || O || U || Y;
	return vogal;
}
