#include<stdio.h>
#include<string.h>
#include<ctype.h>
struct SINHVIEN{
	char hoten[50];
	char SHSV[15];
	double giuaky;
	double cuoiky;
	double diemhp;
};
void tinhdiem() {
	struct SINHVIEN a;
	struct SINHVIEN *pSv=&a;
	printf("Nhap diem giua ky va cuoi ky: ");
	scanf("%f %f", &(pSv->giuaky), &(pSv->cuoiky));
	if ((pSv->giuaky)<3||(pSv->cuoiky)<3) printf("diem hoc phan la 0.0");
	if ((pSv->giuaky)>=3&&(pSv->cuoiky)>=3) {
		pSv->diemhp=pSv->giuaky*0.3+pSv->cuoiky*0.7;
		printf("diem hoc phan la %f\n", pSv->diemhp);
	}
}
int main() {
	tinhdiem();
	return 0;
}
