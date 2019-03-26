#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100
int karakterSil(char* yeni, char* metin, char* silinen_karakterler) {
	int silinenSay = 0;
	for(int i = 0; i < strlen(metin); i++) {
		yeni[i] = metin[i];
	}
	for(int i = 0; i < strlen(yeni) ; i++) {
		for(int j = 0; j < strlen(silinen_karakterler); j++) {
			if(yeni[i] == silinen_karakterler[j]) {
				yeni[i] = ' ';
				silinenSay++;
			}
		}
	}

	for (int i = 0; yeni[i] != '\0'; i++) {
		yeni[i] = ' ';
	}

	return silinenSay; // TODO kac tane sildigini yazsin
}
int main () {
	char karakterYaz[SIZE];
	char sil[10];
	char yeniMetin[101];
	int i=0,sayac=0;



	scanf("%s", karakterYaz); // karakter yazmak için
	scanf("%s", sil); // silinecek karakterler

	while(karakterYaz[i]!= '\0')
	i++;

	while (i >= 0)
	{
		if(karakterYaz[i]== ' ')
		sayac++;
		i--;
	}

	printf("%d\n", karakterSil(yeniMetin, karakterYaz, sil)); // kaç karakter sildigini yazacak
	printf("%s\n", yeniMetin); // yeni metni yazacak

	/*printf("\n");
	printf("orjinal:\n");
	for (int i = 0; i < strlen(karakterYaz); i++) {
		printf("%c", karakterYaz[i]);
	}
	printf("\n");
	printf("yeni:\n");
	for (int i = 0; i < strlen(yeniMetin); i++) {
		printf("%c", yeniMetin[i]);
	}*/
	return 0;
}
