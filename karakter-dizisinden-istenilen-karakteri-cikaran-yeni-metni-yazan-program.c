#include<stdio.h>
#include<ctype.h>
#define SIZE 100
int karakterSil(char *yeni,char *metin, char *silinen_karakterler){
	int i,j,say=0;
	for(i=0;silinen_karakterler[i]!=0;i++){
		for(j=0;metin[j]!=0;j++){
			if(toupper(silinen_karakterler[i])==toupper(metin[j])){
				metin[j]=8; //back space demek flag yerıne koydum
			}
		}
	}
	int yensay=0;

	for(i=0;metin[i]!=0;i++){
		if(metin[i]!=8){
			yeni[yensay]=metin[i];
			yensay++;
		}else
			say++;
	}
	yeni[yensay]=0        ;
	return say;
}
int main () {
	char karakterYaz[SIZE];
	char sil[11];
	char yeniMetin[SIZE];
	yeniMetin[0]=0;
	gets(karakterYaz); // karakter yazmak icin
	gets(sil); // silinecek karakterler
	int ch=(karakterSil(yeniMetin, karakterYaz, sil));
	printf("%d\n%s",ch,yeniMetin);

	return 0;
}
