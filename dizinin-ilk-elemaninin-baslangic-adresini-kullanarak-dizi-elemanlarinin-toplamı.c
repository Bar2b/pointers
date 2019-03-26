#include<stdio.h>
int dizi1 (int a[],int n)
{
	int *p,toplam = 0,i;
	p = &a[0];
		for(i = 0;i < n;i++){
		toplam += *(p+i);	
		}
		return toplam;
}
int main () {
	int sayi[10] = {55,11,99,88,111,77,66,44,33,22};
	int f;
	f = dizi1(sayi,10);
	printf("Sayilarin toplami = %d",f);
	return 0;
}
