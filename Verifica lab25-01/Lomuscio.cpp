#include<stdio.h>
float tariff(char a,int b){
	float tar=0;
	const float tara=2.58;
	const float tarm=19.11;
	if(a=='a'){
		tar=b*tara;
	}
	if(a=='m'){
		tar=b*tarm;
	}
	return tar;
}
void ordina(int k[],int id[],char ti[],float tar[]){
	int j,aux,aux1,pmin=0;
	char aux2;
	float aux3;
	for(int i=0;i<=3;i++){
		pmin=i;
		for(j=i+1;j<=4;j++){
			if(k[pmin]>k[j]){
				pmin=j;
			}
		}
		if(pmin!=i){
			aux=k[i];
			k[i]=k[pmin];
			k[pmin]=aux;
			aux1=id[i];
			id[i]=id[pmin];
			id[pmin]=aux1;
			aux2=ti[i];
			ti[i]=ti[pmin];
			ti[pmin]=aux2;
			aux3=tar[i];
			tar[i]=tar[pmin];
			tar[pmin]=aux3;
		}
	}
}
void stampa(int k[],int id[],char ti[],float tar[]){
	int i;
	for(i=0;i<=4;i++){
		printf("\nveicolo numero:%d",id[i]);
		printf("\npotenza veicolo:%d",k[i]);
		printf("\ntipo veicolo:%c",ti[i]);
		printf("\ntariffa del veicolo:%f\n",tar[i]);
	}
}
int main(){
	int kw[5],iden[5];
	char tipo[5];
	float tariffa[5];
	int i;
	printf("Inserisci i dati di 5 veicoli:\n");
	for(i=0;i<=4;i++){
		printf("inserisci il numero del %d veicolo: ",i+1);
		scanf("%d",&iden[i]);
		printf("inserisci la potenza in kw del %d veicolo: ",i+1);
		scanf("%d",&kw[i]);
		do{
		    scanf("%c");
		    printf("inserisci il tipo del %d veicolo: ",i+1);
		    scanf("%c",&tipo[i]);
	    }while(!((tipo[i]=='a')||(tipo[i]=='m')));
	}
	for(i=0;i<=4;i++){
		tariffa[i]=tariff(tipo[i],kw[i]);
	}
	ordina(kw,iden,tipo,tariffa);
	printf("\nvettori ordinati:\n");
	stampa(kw,iden,tipo,tariffa);
	return 0;
}
