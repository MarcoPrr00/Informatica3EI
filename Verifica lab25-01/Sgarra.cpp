#include<stdio.h>
float tassa (int kw,char Veic){// con questa funzione vado a calcolare la tassa da pagare in base al tipo e alla potenza della vettuera
	float tariffa;
	if(Veic=='a'){
		tariffa=kw*2.58;// calcolo della tariffa in caso la vettura sia un auto
	}
	else{
		tariffa=kw*19.11;
	}
	return tariffa; 
}


void scambioF(float *a, float *b ){ // procedura usata per lo scambio di variabili decimali 
	float aux;
	aux=*a;
	*a=*b;
	*b=aux;
}


void scambioI(int *a, int *b ){// proce dura usata per lo scambio di variabili intere 
	int aux;
	aux=*a;
	*a=*b;
	*b=aux;
}


void scambioC(char *a, char *b ){// procedura usata per lo scambio di ariabili di tipo carattere 
	char aux;
	aux=*a;
	*a=*b;
	*b=aux;
}


void ordinamento(int Kw[],float tari[],int iden[],char Veic[],int n){// procedura che uso per ordinare le informazioni dei veicoli in base alla potenza
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i;j<n;j++){
			if(Kw[i]>Kw[j]){// controllo 
				scambioF(&tari[i],&tari[j]);// chiamata della proceedura che scambia i valori della tariffa da pagare
				scambioI(&Kw[i],&Kw[j]);// chiamata della procedura che scambia i valori della potenza dei veicoli
				scambioI(&iden[i],&iden[j]);// chiamata della procedura che scambia il codice identificativo dei veicolo 
				scambioC(&Veic[i],&Veic[j]);// chiamata della procedura che scambia la categoria dei veicoli
			}
		}
	}
}


void stampa(int Kw[],float tari[],int iden[],char Veic[],int n)//procedura che serve alla stampa della informazioni del veicoli
{
	for(int i=0;i<n;i++){
		printf("Identificatico veicolo :%d \202",iden[i]);// stampa del codice identificativo del veicolo
		if(Veic[i]=='a'){ // controllo per vedere se è un auto o una moto in maniera tale da stampare la parola auto o moto e non il singolo carattere 
			printf(" un auto");
		}
		else{
			printf(" una moto");
		}
		printf(", ha una potenza di %d e la tassa per il mantenimento \202 :%f euro \n",Kw[i],tari[i]);// stampa della potenza e delle tassa da pagare per il mantenimento
	}
}


int main(void){
	int n=5,Kw[n],Iden[n];// dichiarazione variabili
	float tari[n];
	char Veic[n];
	for(int i=0;i<n;i++){// richiesta delle informazini dei veicoli
	printf("Inserire le informazioni inerenti alla %d vettura\n", (i+1));
		printf("Inserire l'Identificativo veicolo:");// richezta del codice identificativo 
		scanf("%d",&Iden[i]);
		printf("Inserire la potenza in kilowat:");// richiesta della potenza
		scanf("%d",&Kw[i]);
		scanf("%c");
		do{// controllo per vedere se è stato inserito corretamente il tipo di veettura
			printf("Inserire il tipo di veicolo, a se il tipo \202 un auto o m se \202 moto:");
			scanf("%c",&Veic[i]);
			scanf("%c");
			if(Veic[i]!='a'&&Veic[i]!='m'){
				printf("tipo non accetabile\n");
			}
		}while(Veic[i]!='a'&&Veic[i]!='m');
		
		tari[i]=tassa(Kw[i],Veic[i]);// chiamara della procedura che calcola le tasse da pagare
	}
	ordinamento(Kw,tari,Iden,Veic,n);// chiamata della procedura che ordina le informazioni dell'auto in base alla potenza
	stampa(Kw,tari,Iden,Veic,n);//stampa della informazioni relative ai veicoli
	return 0;
}
