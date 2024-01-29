#include<stdio.h>

//variabile globare
int n=5;

//funzione per calcolare la tassa
float tassa(int kw[],char tipo[],float tassap[]){
	int i;
	for(i=0;i<n;i++){
		//se il veicolo è di tipo 'a' o 'A'
		if(((tipo[i]=='a')||(tipo[i]=='A')))
		{
			tassap[i]=kw[i]*2.58;
		}
		else{
			//se il veicolo è di tipo 'm' o 'M'
			tassap[i]=kw[i]*19.11;
		}
	}
}

//procedura per ordinamento intero
void ordinamento(int C[],int V[],char L[],float P[]){
	
	int i,j,max;
	int aux;
		for(i=0;i<n-1;i++){ 
			max=i;
		     	for (j=i+1;j<n;j++){
		    	  	if(C[j]<C[max]){
		    		  max=j;
		    	    }
		        }   
		//scambio dell'identificativo del veicolo 
		aux = C[max];
		C[max] = C[i];
		C[i] = aux;
		
		//scambio dei kilowatt del veicolo 
		aux = V[max];
		V[max] = V[i];
		V[i] = aux;
		
		//scambio del tipo del veicolo 
		aux = L[max];
		L[max] = L[i];
		L[i] = aux;
		
		//scambio del costo del veicolo 
		aux = P[max];
		P[max] = P[i];
		P[i] = aux;
		}
}

//procedura per la stampa 
void stampa(int C[],int V[],char L[],float P[]){
	int i;
	for(i=0;i<n;i++){
		printf("identificativo del veicolo: %d\n",C[i]);
		printf("kilowatt del veicolo: %d\n",V[i]);
		printf("tipo di veicolo: %c\n",L[i]);
		printf("costo del veicolo: %f\n\n",P[i]);
	}
}

int main (){
	
	// dichiarazione varabili
	int i,ide[n],kw[n];
	char tipo[n];
	float tassap[n];
	
	//lettura delle informazioni del veicolo
	for(i=0;i<n;i++){
		printf("inserire identificativo del veicolo: ");
		scanf("%d",&ide[i]);
		printf("inserire i kilowatt del veicolo: ");
		scanf("%d",&kw[i]);
		do{
			printf("inserire il tipo di veicolo: ");
			scanf("%d");
			scanf("%c",&tipo[i]);
			if(!((tipo[i]=='m')||(tipo[i]=='M')||(tipo[i]=='a')||(tipo[i]=='A'))){
				printf("\nil tipo di veicolo inserito \202 sbagliato! Inserire il tipo corretto(a/m)\n");
			}
		}while(!((tipo[i]=='m')||(tipo[i]=='M')||(tipo[i]=='a')||(tipo[i]=='A')));
		printf("\n");
	}

	//calcolo dellam tassa(costo) del veicolo
	tassa(kw,tipo,tassap);	
	
	//ordinamenti degli array
	ordinamento(ide,kw,tipo,tassap);

	//stampa di tutte le informazioni del veicolo
	printf("\n");
	stampa(ide,kw,tipo,tassap);
	
	// fine del main
	return 0;
}

