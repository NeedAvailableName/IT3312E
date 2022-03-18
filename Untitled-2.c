#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
typedef struct d {
	int day;
	int month;
	int year;
} date;
void Frequency(int n, char a[n]) {
	int i;
	printf("Input an integer n (n<=20)\n");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("Enter a non-negative integer number: ");
		scanf("%d", &a[i]);
	}
	int j;
	for (i = 0; i < n; i++) {
		int count = 0;
		for (j = i; j < n; j++) {
			if (a[j] == a[i]) count+=1;
		}
		printf("%d\t%d\n", a[i], count);
	}
}

void Fibonacci(int n) {
	printf("Enter an integer: ");
	scanf("%d", &n);
	int i = 0, j = 1, sum = 0, k = 3;
	while(k <= n) {
		sum = i + j;
		i = j;
		j = sum;
		k++; 
	}
	printf("%d\n", sum);
}

void Password() {
	int i,n,x=0,y=0,z=0,check=0;
	char a[1000];
	gets(a);
	n = strlen(a);
	if (n < 10) printf("False\n");
	else {
		for (i = 0; i < n; i++) {
			if (a[i] >= '0' && a[i] <= '9') x = 1;
		}
		for (i = 0; i < n; i++) {
			if (a[i] >= 'a' && a[i] >= 'z') y = 1;
		}
		for (i = 0; i < n; i++) {
			if (a[i] >= 'A' && a[i] <= 'Z') z = 1;
		}
        check = x+y+z;
        if (check == 3) printf("True\n");
        else printf("False\n");
    }
}

void Date (date d) {
	printf("Input a date with the format of dd/mm/yyyy\n");
	scanf("%d/%d/%d", d.day, d.month, d.year);
	if ((d.year % 4 == 0) || (d.year % 100 == 0 && d.year % 400 == 0) && d.month == 2) {
		if (d.day >= 1 && d.day <= 28) {
			d.day += 1;
			printf("%d/%d/%d\n", d.day, d.month, d.year);
		}
		else if (d.day == 29) {
			d.day = 1;
			d.month = 3;
			printf("%d/%d/%d\n", d.day, d.month, d.year);
		}
		else printf("INVALID\n");
	}
	else {
		if (d.month==1||d.month==3||d.month==5||d.month==7||d.month==8||d.month==10||d.month==12) {
			if (d.day>0&&d.day<=30) {
				d.day+=1;
				printf("%d/%d/%d\n", d.day,d.month,d.year);
			}
			else if (d.day==31 && d.month==12) {
				d.day=1;
				d.month=1;
				d.year+=1;
				printf("%d/%d/%d\n", d.day,d.month,d.year);
			}
			else if(d.day==31) {
				d.day=1;
				d.month+=1;
				printf("%d/%d/%d\n", d.day, d.month, d.year);
			}
			else printf("INVALID\n");
		}
		if (d.month==2) {
			if (d.day>0 && d.day<=27) {
				d.day+=1;
				printf("%d/%d/%d\n", d.day,d.month,d.year);
			}
			else if(d.day==28) {
				d.day=1;
				d.month=3;
				printf("%d/%d/%d\n", d.day,d.month,d.year);
			}
			else printf("INVALID\n");
		}
		else {
			if (d.day>0&&d.day<=29) {
				d.day+=1;
				printf("%d/%d/%d\n", d.day,d.month,d.year);
			}
			else if (d.day==30) {
				d.day=1;
				d.month+=1;
				printf("%d/%d/%d", d.day,d.month,d.year);
			}
			else printf("INVALID\n");
		}
	}
}

int main () {
	int menu,n;
	char a[n];
	date d;
	printf("Main menu\n");
	printf("1.Frequency\n");
	printf("2.Fibonacci\n");
	printf("3.Password\n");
	printf("4.Date\n");
	printf("5.Exit\n");
	do {
		printf("Enter one option\n");
		scanf("%d", &menu);
		switch(menu) {
			case 1: Frequency(n,a);
			break;
			case 2: Fibonacci(n);
			break;
			case 3: Password();
			break;
			case 4: Date(d);
			break;
			case 5: printf("Exit\n");
			break;
		}
	} while(menu!=5);
}


