#include <stdio.h>
#include <string.h>
typedef struct strudentRec {
	char name[80];
	int mark;
} Student;
int main () {
	int total, i;
	Student stud_list[40];
	printf("Co bao nhieu sinh vien? ");
	scanf("%d", &total);
	if (total > 40) {
		printf("So qua lon. Khong du bo nho.\n");
		exit(1);
	}
	printf("\nNhap danh sach ten va diem:\n");
	for (i = 0; i < total; i++) {
		printf("Sinh vien %d: ", i+1);
		scanf("%s %d", stud_list[i].name, &(stud_list[i].mark));
	}
	printf("\nDanh sach nhung nguoi thi lai:\n\n");
	for (i = 0; i < total; i++) {
		if (stud_list[i].mark < 5) {
			printf("Ten : %s\n", stud_list[i].name);
			printf("Diem: %d\n", stud_list[i].mark);
		}
	}
	return 0;
}
