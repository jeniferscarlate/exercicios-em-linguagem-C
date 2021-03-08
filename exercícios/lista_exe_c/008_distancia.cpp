#include <stdio.h>

int main (){
	float metros = 0.0, km = 0.0, hm = 0.0;
	float dam = 0.0, dm = 0.0, cm = 0.0, mm = 0.0; 
	
	printf("Digite uma distancia em metros: ");
	scanf("%f", &metros);
	
	km = (metros/1000);
	hm = (metros/100);
	dam = (metros/10);
	dm = (metros*10);
	cm = (metros*100);
	mm = (metros*1000);
	
	printf("\nA distancia de %.2fm corresponde a:", metros);
	printf("\n%.5fKm", km);
	printf("\n%.4fHm", hm);
	printf("\n%.3fDam", dam);
	printf("\n%.1fdm", dm);
	printf("\n%.1fcm", cm);
	printf("\n%.1fmm", mm);
	
	
	return 0;
}
