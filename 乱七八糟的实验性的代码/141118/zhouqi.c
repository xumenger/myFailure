#include<stdio.h>
#include<string.h>

int main(){
	char word[100];
	scanf("%s",word);
	int len = strlen(word);
	int i=j=0;
	for(i=0; i<=len; i++){
		if(len%i==0){
			int ok = 1;
			for(j=i; j<len; j++)
				if(word[j]!=word[j%i]){
					ok=0;
					break;
				}
		}
		if(ok){
			printf("%d\n", i);
			break;
		}
	}
	return 0;
}
