#include<stdio.h>
//funzione calcolo tariffa auto
float tassaA(int kw[],float tassaA)
{
	int i;
	for(i=0;i<5;i++)
	{
		tassaA=kw[i]*2,58;
	}
	return tassaA;
}
//funzione calcolo tariffa moto
float tassaM(int kw[],float tassaM)
{
	int i;
	for(i=0;i<5;i++)
	{
		tassaM=kw[i]*19,11;
	}
	return tassaM;
}
//stampa vettori
void stampa(int num[],int kw[], char tip[],float tass[],int i)
{
 for(i=0;i<5;i++)
{
	printf("i numeri dei veicoli sono : %d",&num[i]);
	printf("i KW dei veicoli sono: %d",&kw[i]);
	printf("i tipi di veicoli sono: %c",&tip[i]);
	printf("le tasse dei veicoli sono : %f",&tass[i]);
}
}
//ordinamento crescente kw
void ordinamento( int kw[])
{
	int i,aux;
	for(i=0;i<5;i++)
	{
		if(kw[i]>kw[i+1])
		{
			aux=kw[i+1];
			kw[i+1]=kw[i];
			kw[i]=aux;
		}
	}
}

int main()
 {
 	int i,num[i],kw[i],n;
	float tass[i];
 	char tip[i];
 	n=5;
 
 	for(i=0;i<n;i++)
 	{
 		printf("Inserire il numero del veicolo: ");
 		scanf("%d",&num[i]);
 		printf("Inserire i KW del veicolo: ");
 		scanf("%d",&kw[i]);
 		printf("Inserire il tipo di veicolo:    \nATTENZIONE\n IL VEICOLO PUO ESSERE SOLO 'A' auto o 'M' moto");
 		scanf("%c");
 		scanf("%c",&tip[i]);
	 }
	 //carico il vettore tassa
	 for(i=0;i<5;i++)
	 {
	 	if(tip[i]=='A')
	 	{
	 		tass[i]=  tassaA(int kw[i], tip[i]);
		}
		else
		{
			if(tip[i]=='M')
			{
				tass[i]=  tassaM(int  kw[i], tip[i]);
			}
		}
     }

 }
