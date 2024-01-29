#include<stdio.h>
int prezzo(char v1[],int v2[]){
	int i,n=5,prz[n];
	for(i=0;i<n;i++){
		if(v1[i]=='a'){
			prz[i]=v2[i]*2.58;
	}
	else{
		prz[i]=v2[i]*19.11;
	}
}
	return prz[i];
}
void scambio(int *x,int *y){
	int aux;
	aux=*x;
	*x=*y;
	*y=aux;
}
void scambioc(char *a,char *b){
	int naux;
	naux=*a;
	*a=*b;
	*b=naux;
}
void ordina(int v[],char tipo[],int n){
	int j,min,i;
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(v[j]>v[min]){
				min=j;
				scambio(&v[min],&v[j]);
				scambioc(&tipo[min],&tipo[j]);
			}
		}
	}
}
void stampa(int v[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("valore: %d\n",v[i]);
	}
}
void stampac(char v[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("tipo veicolo %c\n",v[i]);
	}
}
int main(){
	int n=5,i,vei[n],kw[n],cost[n];
	char scelta,tipov[n];
	for(i=0;i<n;i++){
		printf("inserisci il numero del veicolo: ");
		scanf("%d",&vei[i]);
		printf("inserisci i KiloWatt del veicolo: ");
		scanf("%d",&kw[i]);
		scanf("%c");
		do{
			printf("inserire il tipo di veicolo'a'(auto)'m'(moto): ");
			scanf("%c",&tipov[i]);
			if(tipov[i]!='a'&&tipov[i]!='m'){
				printf("hai inserito un tipo sbagliato\n");
				scanf("%c");
			}
		}while(scelta=='a'&&scelta=='m');
	}
	
	cost[i]=prezzo(tipov,kw);
	ordina(kw,tipov,n);
	stampa(vei,n);
	stampa(kw,n);
	stampac(tipov,n);
	stampa(cost,n);
}
