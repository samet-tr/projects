#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float tutar,para;
	int k20000=20000,k10000=10000,k5000=5000,k2000=2000,k1000=1000,k500=500,k100=100,kr50=50,kr25=25,kr10=10,kr5=5,kr1=1;
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
	
	adet= ustkrs/k20000;
	ustkrs= ustkrs%k20000;
	toplam_kupur+=adet;
	printf("%d adet 200 tl\n",adet);
	
	adet= ustkrs/k10000;
	ustkrs= ustkrs%k10000;
	toplam_kupur+=adet;
	printf("%d adet 100 tl\n",adet);
	
	adet= ustkrs/k5000;
	ustkrs= ustkrs%k5000;
	toplam_kupur+=adet;
	printf("%d adet 50 tl\n",adet);
	
	adet= ustkrs/k2000;
	ustkrs= ustkrs%k2000;
	toplam_kupur+=adet;
	printf("%d adet 20 tl\n",adet);
	
	adet= ustkrs/k1000;
	ustkrs= ustkrs%k1000;
	toplam_kupur+=adet;
	printf("%d adet 10 tl\n",adet);
	
	adet= ustkrs/k500;
	ustkrs= ustkrs%k500;
	toplam_kupur+=adet;
	printf("%d adet 5 tl\n",adet);
	
	adet= ustkrs/k100;
	ustkrs= ustkrs%k100;
	toplam_kupur+=adet;
	printf("%d adet 1 tl\n",adet);
		
	adet= ustkrs/kr50;
	ustkrs= ustkrs%kr50;
	toplam_kupur+=adet;
	printf("%d adet 50 krs\n",adet);
	
	adet= ustkrs/kr25;
	ustkrs= ustkrs%kr25;
	toplam_kupur+=adet;
	printf("%d adet 25 krs\n",adet);
	
	
	adet= ustkrs/kr10;
	ustkrs= ustkrs%kr10;
	toplam_kupur+=adet;
	printf("%d adet 10 krs\n",adet);
	
	adet= ustkrs/kr5;
	ustkrs= ustkrs%kr5;
	toplam_kupur+=adet;
	printf("%d adet 5 krs\n",adet);
	
	adet= ustkrs/kr1;
	ustkrs= ustkrs%kr1;
	toplam_kupur+=adet;
	printf("%d adet 1 krs\n\n",adet);
	
	printf("Toplam verilmesi gereken kupur/madeni para sayisi: %d\n", toplam_kupur);
	
	
	return 0;
}
