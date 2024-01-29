#include<stdio.h>
float tassa(float tariffaA,float tariffaM)
{
	int i;
	int KiloWatt[i];
	char tipo;
	if(tipo=='a')
	{
		tariffaA=KiloWatt[i]*2,58;
	}
	else{
			tariffaM=KiloWatt[i]*19,11;
		}
	return tassa;
} 

void ordina (int *nV[],int *K[],char *t[],int *n)
{
	int aux,i,j,pmin;
	
	aux=0; 
	pmin=i;
	for(i=0;i<=n;i++)
	{
		for(j=0;j=i+1;j++)
		{
			if (nV[i]>nV[j])
			{	
				pmin=j;
				aux=nV[i];
				nV[i]=nV[pmin];
				nV[pmin]=aux;
			}
		}
	}
	for(i=0;i<=n;i++)
	{
		for(j=0;j=i+1;j++)
		{
			if (K[i]>K[j])
			{	
				aux=K[i];
				K[i]=K[pmin];
				K[pmin]=aux;
			}
		}
	}
	for(i=0;i<=n;i++)
	{
		for(j=0;j=i+1;j++)
		{
			if (t[i]>t[j])
			{
				aux=t[i];
				t[i]=t[pmin];
				t[pmin]=aux;
			}
		}
	}
}
stampa(int *nV,int *K, char *t)
{
	printf("il numero del veicolo e':	");
	printf("%d",nV);
	printf("i KiloWatt del veicolo sono:	");
	printf("%d",K);
	printf("il tipo del veicolo e':	");
	printf("%d",t);			
}
int main()
{
	int numeroV[5],KiloWatt[5];		char tipo[5];
	int i,n;
	char a,m,tas;
	n=5;
	
	for (i=0;i<=n;i++)
	{
		printf("inserire il numero del veicolo:\n	 ");
		scanf("%d",& numeroV[i]);

		printf("inserire i KiloWatt del veicolo:\n	");
		scanf("%d",& KiloWatt[i]);
	
		printf("inserire la tipologia del veicolo:	");
		scanf("%c",& tipo[i]);
		if (tipo[i]=='a' && tipo[i]=='m')
		{
		} 
		printf("il tipo inserito non è valido riprovare");	
	}
	tas = float tassa (numeroV,KiloWatt,tipo);
	ordina (*numeroV,*KiloWatt,*tipo,*n);
	stampa ()	
}
