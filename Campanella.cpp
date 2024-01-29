#include<stdio.h>
int n=5; //dichiarazione di una variabile globale (numero di veicoli)
const float aut=2.58,mot=19.11; //dichiarazione di due costanti per il calcolo della tassa da pagare

//funzione per il calcolo della tassa da pagare

float tassa(float pag[],char tipo[],int kiloWatt[],int i)
{
	if(tipo[i]=='a')
	{
		pag[i]=kiloWatt[i]*aut;
	}
	else
	{
		pag[i]=kiloWatt[i]*mot;
	}
	return pag[i];
}

//Procedura per l'ordinamento (per selezione)

void ordinamento(int kiloWatt[],float pag[],int ident[],char tipo[])
 {
 	int i,j,aux1,aux3,min;
 	float aux2;
 	char aux4;
 	for(i=0;i<=n;i++)
 	{
 		min=i;
 		for(j=i+1;j<n;j++)
 		{
 			if(kiloWatt[min]>kiloWatt[j])
 			{
 				min=j;
			}
		}
		aux1=kiloWatt[i];
		kiloWatt[i]=kiloWatt[min];
		kiloWatt[min]=aux1;
		
		aux2=pag[i];
		pag[i]=pag[min];
		pag[min]=aux2;
		
		aux3=ident[i];
		ident[i]=ident[min];
		ident[min]=aux3;
		
		aux4=tipo[i];
		tipo[i]=tipo[min];
		tipo[min]=aux4;
	}
 }
 
 //Procedura per la stampa dei vettori
 
 void stampa(int kiloWatt[],float pag[],int ident[],char tipo[],int i)
 {
 	printf("\nIdentificativo del %d veicolo: %d",(i+1),ident[i]);
	printf("\nkiloWatt del %d veicolo: %d",(i+1),kiloWatt[i]);
	printf("\nTipo del %d veicolo: %c",(i+1),tipo[i]);
	printf("\nTassa per il %d veicolo: euro %f",(i+1),pag[i]);
	printf("\n\n");
 }
 
 //main
 
int main()
{
	//dichiarazione delle variabili locali al main
	
	int i,id[n],kW[n];
	float costo[n];
	char tipo[n];
	
	//programma
	
	for(i=0;i<n;i++) //input dei vettori paralleli e calcolo delle tasse da pagare
	{
		printf("Inserire l'identificativo del %d veicolo: ",(i+1));
		scanf("%d",&id[i]);
		printf("Inserire i KiloWatt: ");
		scanf("%d",&kW[i]);
		printf("Inserire il tipo del veicolo: ");
		do
		{
			scanf("%c");
			scanf("%c",&tipo[i]);
			if(!((tipo[i]=='a')||(tipo[i]=='m')))
			{
				printf("Inserire correttamente il tipo di veicolo: \n");
			}
		}while(!((tipo[i]=='a')||(tipo[i]=='m')));
		costo[i]=tassa(costo,tipo,kW,i);
	}
	ordinamento(kW,costo,id,tipo); //ordinamento in ordine crescente di kiloWatt
	printf("Veicoli ordinati in base ai kW: \n");
	for(i=0;i<n;i++) //stampa dei vettori
	{
		stampa(kW,costo,id,tipo,i);
	}
	return 0;
} //fine
