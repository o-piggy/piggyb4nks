#include <stdio.h>
#include <string.h>

int main(){

	int tc;
	int len;
	scanf("%d", &tc);
	for (int i = 0; i < tc; i++){
		char word[102];
		scanf("%s", word);
		int len = strlen(word);
		for (int j =0; j < len; j++){ //mencari c
			if (word[j] == 'c'){
				if (word[j+1] == 'h'){
					word[j] = 'c';
					for (int k=j+1; k < len;k++){
						word[k] = word[k+1];
						
					}
				}
				else if (word[j+1] == 'e' || word[j+1] == 'i' || word[j+1] == 'y'){
					word[j] = 's';
				}
				else /*( j == len)*/{
					word[j] = 'k';
				}
			}
		}
		printf("%s", word);
		printf("\n");	
	}	
	return 0;
}
