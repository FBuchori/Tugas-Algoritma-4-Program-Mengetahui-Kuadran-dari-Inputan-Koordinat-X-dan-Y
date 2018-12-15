#include <stdio.h>
#include <conio.h>

int main()
{
	int x,y;
	printf("masukkan nilai x : "); scanf("%i",&x);
	printf("masukkan nilai y : "); scanf("%i",&y);
	if(x>0 && y>0)
	printf("kuadran I");
	if(x>0 && y<0)
	printf("kuadran II");
	if(x<0 && y<0)
	printf("kuadran III");
	if(x<0 && y>0)
	printf("kuadran IV");
	if(x==0 && y==0)
	printf("titik pusat");
	
	return 0;
}
