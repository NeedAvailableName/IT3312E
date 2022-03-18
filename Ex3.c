#include<stdio.h>
#include<string.h>
int main() {
	char s[100];
	char a, b;
	int i;
	gets(s);
	scanf("%c", &a);
	scanf(" %c", &b);
	for(i=0;i<strlen(s);i++) {
		if(s[i]==a) s[i]=b;
	}
	puts(s);
}
