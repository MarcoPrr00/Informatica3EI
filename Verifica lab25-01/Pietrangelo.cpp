#include <stdio.h>
float tarif(char a,int b){
	float tar=0;
	const float tarau=2.58;
	const float tarmo=19.11;
	if(a=='a'){
		tar=b*tarau;
	}
	if(a=='m'){
		tar=b*tarmo;
	}
	return tar;
}
void ordina(int k[],int ide[],char ti[],float tar[]){
	int j,aux,aux1,pmin=0;
	char aux2;
	float aux3;
	for(int i=0;i<=4;i++){
		pmin=i;
		for(int j=i+1;j<=4;j++){
			if(k[pmin]>k[j]){
				pmin=j;
			}
		}
		
			aux=k[i];
			k[i]=k[pmin];
			k[pmin]=aux;
			aux1=ide[i];
			ide[i]=ide[pmin];
			ide[pmin]=aux1;
			aux2=ti[i];
			ti[i]=ti[pmin];
			ti[pmin]=aux2;
			aux3=tar[i];
			tar[i]=tar[pmin];
			tar[pmin]=aux3;
			
			
		
	}	
}
void stampa(int k[],int ide[],char ti[],float tar[]){
	for(int i=0;i<=4;i++){
		printf("\n numero veicolo:%d",ide[i]);
		printf("\n Kilowatt veicolo:%d",k[i]);
		printf("\n tipo veicolo:%c",ti[i]);
		printf("\n tariffa veicolo:%d",tar[i]);
		
		
	}
}



int main(){
	int i;
	int kw[5],id[5];
	char tipo[5];
	float tariffa[5];
	printf("Inserisci i dati relativi a 5 veicoli:");
	for(i=0;i<=4;i++){
        printf("\nInserire il numero identificativo del veicolo: "); 
        scanf("%d", &id[i]);
    
    
        printf("Inserisci il numero di KiloWatt: "); 
        scanf("%d", &kw[i]);
        	scanf("%c");
    do{
    
        printf("Inserisci il tipo del veicolo(a-Auto/m-Moto): "); 
        scanf("%c", &tipo[i]);
	}while((!tipo[i]=='a')||(!tipo[i]=='m'));   
}
     for(i=0;i<=4;i++){
     	float tariffa[i]=tarif(tipo[i],kw[i])
	 }
	 ordina(kw,id,tipo,tariffa);
	 printf("|DATI ORDINATI|");
	 stampa(kw,id,tipo,tariffa);
}
