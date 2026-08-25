#include <stdio.h>
#include <string.h>

int differentString(char*);

int main(){
	int testCases;
	char string[11];

	scanf("%d",&testCases);
	getchar();

	for(int i = 0; i < testCases; i++){
		scanf("%s",string);
        getchar();
        if(differentString(string)){
            printf("YES\n");
            printf("%s\n",string);
        }else{
            printf("NO\n");
        }
	}
	
	return 0;
}

int differentString(char* string){
	int sLength = strlen(string);

    if(sLength > 1){
        int sChar = 1;
        char firstChar = string[0];
        while(sChar < sLength){
            if(string[sChar] != firstChar){
                string[0] = string[sChar];
                string[sChar] = firstChar;
                return 1;
            }else{
                sChar++;
            }

        }
    }

	return 0;
}
