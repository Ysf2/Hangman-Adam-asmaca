#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>



char kelimeler[][20]= {"ahmet","ayse","fatma","bilgisayar","muhendis","yusuf","elma","armut","okul","motor"};
char *kelime;
char *tahmin;
int size;

void kelimeolustur()
{
	int indis=rand()%10;
	kelime= kelimeler[indis];
	size=strlen(kelime);
	
	
	tahmin=(char*)malloc((size+1)*(sizeof(char)));
	int i=0;
	while(i<size)
	{
		tahmin[i]='-';
		i++;
	}
	tahmin[i]='\0';
	
//	printf("kelime : %s \n",kelime);
	printf("uzunluk    : %d \n",size);
	printf("tahminimiz : %s \n",tahmin);
}

int harfkontrol(char harf)
{
	int i=0,sonuc=0;
	
	while(i<size)
	{
		if(harf==kelime[i])
		{
			tahmin[i]=harf;
			sonuc=1;
		}
		
		i++;
	}
	
	return sonuc;
}

int kelimekontrol()
{
	printf("\ntahminimiz : ");
	int i=0,sonuc=1;
	while(i<size)
	{
		if(tahmin[i]=='-')
		{
			sonuc=0;
		
		}
		i++;
		
	}
	printf("%s \n",tahmin);
	return sonuc;
}

void sehpaciz(int n)
{
	system("cls");
	printf("\n\t\tHANGMAN OYUNU\t\t\n");
	if(n==2)
	{
		printf("\t\t-----------\n");
	}
	
	if(n==3)
	{
		printf("\t\t          |\n");
		printf("\t\t          |\n");
		printf("\t\t-----------\n");
	}
	
	if(n==4)
	{
		printf("\t\t          |\n");
		printf("\t\t          |\n");
		printf("\t\t          |\n");
		printf("\t\t          |\n");
		printf("\t\t-----------\n");
	}
	
	if(n==5)
	{
		printf("\t\t          |\n");
		printf("\t\t          |\n");
		printf("\t\t          |\n");
		printf("\t\t          |\n");
		printf("\t\t          |\n");
		printf("\t\t          |\n");
		printf("\t\t-----------\n");
	}
	
	if(n==6)
	{
		printf("\t\t          |\n");
		printf("\t\t          |\n");
		printf("\t\t          |\n");
		printf("\t\t          |\n");
		printf("\t\t          |\n");
		printf("\t\t          |\n");
		printf("\t\t          |\n");
		printf("\t\t          |\n");
		printf("\t\t-----------\n");
	}
	
	if(n==7)
	{
		printf("\t\t___________\n");
		printf("\t\t          |\n");
		printf("\t\t          |\n");
		printf("\t\t          |\n");
		printf("\t\t          |\n");
		printf("\t\t          |\n");
		printf("\t\t          |\n");
		printf("\t\t          |\n");
		printf("\t\t          |\n");
		printf("\t\t-----------\n");
	}
	
	if(n==8)
	{
		printf("\t\t___________\n");
		printf("\t\t    |     |\n");
		printf("\t\t    O     |\n");
		printf("\t\t          |\n");
		printf("\t\t          |\n");
		printf("\t\t          |\n");
		printf("\t\t          |\n");
		printf("\t\t          |\n");
		printf("\t\t          |\n");
		printf("\t\t-----------\n");
	}
	
	if(n==9)
	{
		printf("\t\t___________\n");
		printf("\t\t    |     |\n");
		printf("\t\t    O     |\n");
		printf("\t\t   /|\\    |\n");
		printf("\t\t          |\n");
		printf("\t\t          |\n");
		printf("\t\t          |\n");
		printf("\t\t          |\n");
		printf("\t\t          |\n");
		printf("\t\t-----------\n");
	}
	
	if(n==10)
	{
		printf("\t\t___________\n");
		printf("\t\t    |     |\n");
		printf("\t\t    O     |\n");
		printf("\t\t   /|\\    |\n");
		printf("\t\t    |     |\n");
		printf("\t\t   /|\\    |\n");
		printf("\t\t          |\n");
		printf("\t\t          |\n");
		printf("\t\t          |\n");
		printf("\t\t-----------\n");
		printf("\t\tASILDINIZ!!\n");
	//	printf("tahminimiz. : %s \n",tahmin);
		printf("kelime      : %s \n ",kelime);
	}
}

int main()
{
	printf("\n\t\tHANGMAN OYUNU\t\t\n");
	srand(time(0));
	kelimeolustur();
	int adet=0;
	char harf;
	while(adet<10)
	{
		adet++;
		printf("harf giriniz  : ");
		scanf(" %c",&harf);
		if(harfkontrol(harf))
		{
			adet--;
		}
		sehpaciz(adet);
		
		if(kelimekontrol())
		{
			printf("TEBRIKLER BILDINIZ \n");
			printf("kelime : %s",tahmin);
			break;
		}
		
	}
	return 0;
	
}
