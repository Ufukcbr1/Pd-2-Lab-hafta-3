#include <stdio.h>
int basamaklartoplam(int sayi){
	if(sayi <= 0)
	return 0;
	
	else
	return sayi % 10 + basamaklartoplam(sayi/10);
	
}

int main(){
	int sayi;
	printf(" L�tfen bir sayi giriniz:\n");
	scanf("%d", &sayi);
	
	printf("Basamaklar Toplami:%d", basamaklartoplam(sayi));
	return 0;
}
