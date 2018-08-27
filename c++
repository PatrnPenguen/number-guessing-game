#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char *argv[]) 
{
  int sayi,tahmin,hak=0;
   
  srand(time(NULL));
   sayi=rand()%100;
	
   do
   {
   	 hak++;

 	 printf("Tahmininizi giriniz");

 	 scanf("%d",&tahmin);

 	 if(sayi<tahmin&&hak<5){
	 	printf("biraz daha kucuk bir sayi giriniz\n");
	
		}else if(sayi>tahmin&&hak<5)
		printf("biraz daha buyuk bir sayi giriniz\n");
	
 	 else if(sayi==tahmin)
 	 printf("%d. hakkınızda bildiniz",hak);

 	 else
 	 printf("Bilemediniz");
		
	}
	while(tahmin!=sayi&&hak<5);
	
	getch();
	return 0;
}
