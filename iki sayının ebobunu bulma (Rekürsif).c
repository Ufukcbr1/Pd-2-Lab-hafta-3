#include <stdio.h>
int Ebob(int x, int y){
    if(x==y)
    return x;
    
    if(x>y)
    return Ebob(x-y, y);
    
    else
    return Ebob(x, x-y);
}

int main(){
	int x, y;
	
	printf("L�tfen birinci sayiyi giriniz:");
	scanf("%d", &x);
	
	printf("L�tfen ikinci sayiyi giriniz:");
	scanf("%d", &y);
	
	printf("%d", Ebob(x, y));
	return 0;
}
