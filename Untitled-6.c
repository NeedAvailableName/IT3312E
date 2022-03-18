#include<stdio.h>
#include<string.h>
#include<math.h>

void test_menu_1 () {
	int i,n;
	char inputText[n];
	printf("Enter n: ");
	scanf("%d", &n);
	for(i=0;i<6;i++) {
		printf("Enter the letter: ");
		scanf("%c", &inputText[i]);
	}
	for(i=0;i<6;i++) {
		if(inputText[i]>='A' && inputText[i]<='Z') {
			inputText[i]-=65;
		}
		printf("%c", inputText[i]);
	}
	int count=0;
	char *ptr=inputText;
	for(i=0;i<n;i++) {
		count++;
		*ptr++;
	}
	printf("%d", count);
}

void test_menu_2() {
	int n, a[n];
	printf("Enter n: ");
	scanf("%d", &n);
	int i=0,j=1,sum=0;
	do {
		sum=i+j;
		i=j;
		j=sum;
	} while(sum<n);
	printf("%d\n", sum);
	if(sum==n) printf("YES\n");
	else printf("NO\n");
	int binaryNumber=0,p=0;
	while(n>0) {
		binaryNumber+=(n%2)*pow(10,p);
		++p;
		n/=2;
	}
	printf("%d", binaryNumber);
}
int main () {
	test_menu_2();
	return 0;
}
