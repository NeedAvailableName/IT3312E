#include<stdio.h>
#include<string.h>
#define SIZE 100
int main() {
	char j;
	char s[SIZE];
	gets(s);
	int count=0,i;
	for(j='a';j<='z';j++) {
		int count=0;
		for(i=0;i<strlen(s);i++) {
			if(j==s[i]) count++;
		}
		if(count>0) printf("The letter %c appears %d time(s)\n", j, count);
	}
	return 0;
}
