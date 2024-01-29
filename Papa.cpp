#include<stdio.h>
float cos(float tar1, float tar2){
	int n=5,i;
	int kw[n];
	char tipv[n];
	for(i=0;i<n;i++){
		if(tipv[i]=='m'){
			kw[i]=kw[i]*tar1;
		}else{
			kw[i]=kw[i]*tar2;
		}
	}
}

void cres(int kw[],int n){
	int i,j,min,aux;
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(kw[min]>kw[j]){
				min=j;
			}
			if(j=n-1){
				aux=kw[min];
				kw[min]=kw[i];
				kw[i]=aux;
			}
		}
			
	}
}


void stamp(int n,int kw[],int ide[],char tipv[]){
	int i;
	for(i=0;i<n;i++){
		printf("%d		%d		%c\n",ide[i],kw[i],tipv[i]);
	}
}
int main(){
	const int n=5;
	char tipv[n];
	float tar1=2.58,tar2=19.11,tar[n];
	int kw[n],ide[n],i;	 //tipv è il tipo del veicolo
	for(i=0;i<n;i++){
		printf("Inserire l'identificativo del %d veicolo:		",i+1);
		scanf("%d",&ide[i]);
		printf("Inserire la quantita' di KiloWatt del %d veicolo:	",i+1);
		scanf("%d",&kw[i]);
		printf("Inserire il tipo del %d veicolo:(m/a)			",i+1);
		scanf("%s",&tipv[i]);
		printf("\n");
	}
	
	
	
	
	//vettore ordinato
	cres(kw,n);
	printf("Stampa vettore kilowatt ordinato:\n");
	for(i=0;i<n;i++){
		printf("%d\n",kw[i]);
	}
	
	
	//informazioni veicoli
	printf("Identificativo	KiloWatt	Tipo\n");
	stamp(n,kw,ide,tipv);
	return 0;
}
