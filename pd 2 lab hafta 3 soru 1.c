#include <stdio.h>
int toplam(int sayi){
	if(sayi==0)
	
	return 0; 
	
	else 
	
	return (sayi+toplam(sayi-1));



}
int main (){
	
	int sayi,t=0;
	printf("lutfen bir sayi giriniz.");
	scanf("%d",&sayi);
	
	t=toplam(sayi);
	
	printf("toplam:%d",t);
	
	
	
	
	
	
	
	
	
	
	return  0;
}
