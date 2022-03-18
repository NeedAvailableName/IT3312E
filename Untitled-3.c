#include <stdio.h>
typedef struct phanso {
	int tuso;
	int mauso;
} phanso;
phanso nhapphanso(phanso a) {
printf("nhap tu so va mau so: ");
scanf("%d %d", &a.tuso, &a.mauso);
return a;
}
phanso rutgon(phanso a) {
	int i, max;
	if (a.tuso <= a.mauso) max = a.mauso;
	else max = a.tuso;
	i = 2;
	while(i <= max) {
		if((a.tuso % i == 0) && (a.mauso % i == 0)) {
			a.tuso = a.tuso / i;
			a.mauso = a.mauso / i;
			i = 2;
		}
		i++; 
	}
	return a;
}
phanso tong(phanso a, phanso b) {
	phanso c;
	c.tuso = a.tuso*b.mauso + a.mauso*b.tuso;
	c.mauso = a.mauso*b.mauso;
	return c;
}
phanso hieu(phanso a, phanso b) {
	phanso c;
	c.tuso = a.tuso*b.mauso - a.mauso*b.tuso;
	c.mauso = a.mauso * b.mauso;
	return c;
}
phanso tich(phanso a, phanso b) {
	phanso c;
	c.tuso = a.tuso * b.tuso;
	c.mauso = a.mauso * b.mauso;
	return c;
}
phanso thuong(phanso a, phanso b) {
	phanso c;
	c.tuso = a.tuso * b.mauso;
	c.mauso = a.mauso * b.tuso;
	return c;
}
phanso inphanso(phanso a) {
printf("phan so: %d/%d", a.tuso, a.mauso);
return a;
}
int main() {
phanso a, b, c;
a = nhapphanso(a);
b = nhapphanso(b);
c = tong(a, b);
rutgon(c);
inphanso(c);
return 0;
}
