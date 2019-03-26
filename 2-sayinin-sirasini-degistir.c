#include<stdio.h>
void degistir (int *a,int *b)
{
	int g;
	 g = *a;
	 *a = *b;
	 *b = g;
}
int main () {
	int x,y;
	printf("Bir sayi giriniz :");
	scanf("%d",&x);
	y = 23;
	printf("Girdiginiz sayi x = %d ve y = %d\n",x,y);
	degistir(&x,&y);
	printf("Yeni degerler x = %d ve y = %d",x,y);
	return 0;
}
