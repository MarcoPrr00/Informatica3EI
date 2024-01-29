#include <stdio.h>

float pagamento(int dim,float prezzo[],int kW[],char tipo[])
{
	const float prezzoA=2.58;			//prezzo auto
	const float prezzoM=19.11;			//prezzo moto
	for(int i=0;i<dim;i++)
	{
		if(tipo[i]=='a')				//calcolo prezzo auto
		{
			prezzo[i]=prezzoA*kW[i];
		}else							//calcolo prezzo moto
		{
			prezzo[i]=prezzoM*kW[i];
		}
		printf("\nIl costo del %do veicolo \202: %f",i+1,prezzo[i]);
		return prezzo[i];
	}
}
void ordina(int n,int nveicl[],int KW[],char veic[],float costo[])
{
	int pmin,j;
	int aux1,aux2;
	char aux3;
	float aux4;
	for(int i=0;i<n-1;i++)
	{
		pmin=i;
		for(j=i+1;i<n;j++)
		{
			if(KW[pmin]>KW[j])
			{
				pmin=j;
				aux1=nveicl[i];
				nveicl[i]=nveicl[pmin];
				nveicl[pmin]=aux1;
				aux2=KW[i];
				KW[i]=KW[pmin];
				KW[pmin]=aux2;
				aux3=veic[i];
				veic[i]=veic[pmin];
				veic[pmin]=aux3;
				aux4=costo[i];
				costo[i]=costo[pmin];
				costo[pmin]=aux4;
			}
		}
	}
}
void stampa(int dimens,int numveic[],int Kwatt[],char veicolo[],float tot[])
{
	for(int i=0;i<dimens;i++)
	{
		printf("%do veicolo: ",i+1);
		scanf("%d	",&numveic[i]);
		scanf("%d	",&Kwatt[i]);
		scanf("%c	",&veicolo[i]);
		scanf("Prezzo: ",&tot[i]);
	}
}
int main()
{
	int n=5;
	int nveic[n],kw[n],i;
	float costo[n],tot[n];
	char veicolo[n];
	
	//lettura vettori paralleli
	for(i=0;i<n;i++)
	{
		printf("Inserire l'identificativo del veicolo: ");
		scanf("%d",&nveic[i]);
		printf("Inserire i kilowatt del veicolo: ");
		scanf("%d",&kw[i]);
		printf("Inserire il tipo di veicolo (a=auto/m=moto): ");
		do
		{
			scanf("%c");
			scanf("%c",&veicolo[i]);
			if(!(veicolo[i]!=('a')||veicolo[i]!=('m')))
			{
			printf("Veicolo non valido, riprovare: ");
		}
		}while(!(veicolo[i]!=('a')||veicolo[i]!=('m')));
	}
	for(i=0;i<n;i++)
	{
		costo[i]=pagamento(n,tot,kw,veicolo);
	}
	ordina(n,nveic,kw,veicolo,costo);
	stampa(n,nveic,kw,veicolo,costo);
}
