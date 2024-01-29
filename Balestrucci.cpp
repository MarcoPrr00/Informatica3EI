#include<stdio.h>
void carica (int veicolo[],int kw[],char tipo[]){
	printf ("caricamento vettori");
	for (int i=0;i<5;i++){
	printf ("inserire identificativo veicolo");
	scanf ("%d",& veicolo[i]);
	printf ("inserire numero di kilowatt");
	scanf ("%d",& kw[i]);
	printf ("inserire tipo veicolo");
	scanf ("%d",& tipo[i]);
	}
}
float tassa (char tipo[],int kw[],float prezz[]){ 
 for (int i=0;i<5;i++){
	if (tipo[i]=='a'){
	prezz[i]=kw[i]*2.58;
	}
	if (tipo[i]=='m'){
		prezz[i]=kw[i]*19.11;
	}
}
	return prezz[i] ;	
}
void ordinamento (int kw[],int kw2[]){
	int pmin;
	float aux;
	for (int i=0;i<5;i++){
		pmin=i;
	for (int j=i+1;j<5;j++){
		if (kw[pmin]>kw2[j]){
			pmin=j;
		}
	}
	}
	aux=kw[i];
	kw[i]=kw[pmin];
	kw[pmin]=aux;
	aux=kw2[i];
	kw2[i]=kw2[pmin];
	kw2[pmin]=aux;
}
void stampa (int veicolo[],int kw[],char tipo[],float prezzo[]){
	for (int i=0;i<5;i++){
		printf ("identificativo del veicolo e il numero: %d: ", veicolo[i]);
		printf ("il numero di kilowatt del veicolo e: %d", kw[i]);
		printf ("il tipo del veicolo e: %c", tipo[i]);
		printf ("la tariffa da pagare e: %f",prezzo[i]);
	}
}
int main (){
	int veicolo [5],kw[5],tipo[5],kw2[5],i,prezz[5];
	float prz[5];
	carica (veicolo,kw,tipo);
	prz[i]= tassa (tipo,kw,prezz);
	ordinamento (kw,kw2);
	stampa (veicolo,kw,tipo,prezz);	
}
