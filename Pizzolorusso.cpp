#include<stdio.h>
int tassa(int i, int tas[]), i, Kw[]){
	for(i=0;i<4;i++){
		if(tip[i]='a'){
		  tas[i]=Kw[i]*2.58;
	    }
	    else{
		 tas[i]=Kw[i]*19.11;
	    }
   }
}
void ordine(int Kw[i], int aux){
	for(i=0;i<4;i++){
		if(Kw[i]>Kw[i+1]){
		aux=Kw[i];
		Kw[i]=Kw[i+1];
		Kw[i+1]=aux;
	    }
	}
}
void stampa(int tas[i], int ve[i],){
	for(i=0;i<4;i++){
		printf("%f",&tas[i] "%d",&ve[i] "%c"&tip[i]);
    }
}
int main(){
	int Kw[5], ve[5],i,tas[5];
	char tip[5];
	for(i=0;i<4;i++){
	printf("Inserire il numero corrispondente al veicolo: ");
	scanf("%d",&ve[i]);
	printf("Inserire i Kilowatt corrispondenti: ");
	scanf("%d",&Kw[i]);
    }
    do{
    	printf("Inserisci se il veicolo si tratta di un'auto (a) o di una moto (m): ");
    	for(i=0;i<4;i++){
    		scanf("%d",&tip[i]);
    		if(tip[i]!='a' && tip[i]!='m'){
    			printf("Hai inserito un tipo di veicolo inesistente.");
			}
        }
	}while(!(tip[i]!='a' && tip[i]!='m'))
    printf("Il prezzo e le informazioni dei veicoli sono: ");
    stampa(tas,tip, ve);
}
