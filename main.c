#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float tutar,para;
	int dizi[12]={20000,10000,5000,2000,1000,500,100,50,25,10,5,1};
	int adet;
	int toplam_kupur=0;
	printf("alisveris tutarini giriniz: ");
	scanf("%f",&tutar);
	
	printf("kasaya verilen miktari girin: ");
	scanf("%f",&para);
	
	int ustkrs=(int)((para-tutar)*100.0+0.5);
	
	printf("********************************************\n");
	
	printf("verilmesi gereken para ustu: %d tl %d kurus\n",ustkrs/100,ustkrs%100);
	
	printf("********************************************\n");
	
	printf("kullanilmasi gereken kupurler: \n\n");
	
	adet= ustkrs/dizi[0];
	ustkrs= ustkrs%dizi[0];
	toplam_kupur+=adet;
	printf("%d adet 200 tl\n",adet);
	
	adet= ustkrs/dizi[1];
	ustkrs= ustkrs%dizi[1];
	toplam_kupur+=adet;
	printf("%d adet 100 tl\n",adet);
	
	adet= ustkrs/dizi[2];
	ustkrs= ustkrs%dizi[2];
	toplam_kupur+=adet;
	printf("%d adet 50 tl\n",adet);
	
	adet= ustkrs/dizi[3];
	ustkrs= ustkrs%dizi[3];
	toplam_kupur+=adet;
	printf("%d adet 20 tl\n",adet);
	
	adet= ustkrs/dizi[4];
	ustkrs= ustkrs%dizi[4];
	toplam_kupur+=adet;
	printf("%d adet 10 tl\n",adet);
	
	adet= ustkrs/dizi[5];
	ustkrs= ustkrs%dizi[5];
	toplam_kupur+=adet;
	printf("%d adet 5 tl\n",adet);
	
	adet= ustkrs/dizi[6];
	ustkrs= ustkrs%dizi[6];
	toplam_kupur+=adet;
	printf("%d adet 1 tl\n",adet);
		
	adet= ustkrs/dizi[7];
	ustkrs= ustkrs%dizi[7];
	toplam_kupur+=adet;
	printf("%d adet 50 krs\n",adet);
	
	adet= ustkrs/dizi[8];
	ustkrs= ustkrs%dizi[8];
	toplam_kupur+=adet;
	printf("%d adet 25 krs\n",adet);
	
	
	adet= ustkrs/dizi[9];
	ustkrs= ustkrs%dizi[9];
	toplam_kupur+=adet;
	printf("%d adet 10 krs\n",adet);
	
	adet= ustkrs/dizi[10];
	ustkrs= ustkrs%dizi[10];
	toplam_kupur+=adet;
	printf("%d adet 5 krs\n",adet);
	
	adet= ustkrs/dizi[11];
	ustkrs= ustkrs%dizi[11];
	toplam_kupur+=adet;
	printf("%d adet 1 krs\n\n",adet);
	
	printf("Toplam verilmesi gereken kupur/madeni para sayisi: %d\n", toplam_kupur);
	
	
	return 0;
}
